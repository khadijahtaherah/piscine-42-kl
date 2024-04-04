/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanauman <hanauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 21:36:59 by hanauman          #+#    #+#             */
/*   Updated: 2024/03/28 14:38:52 by skhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Files to turn in : ft_print_memory.c
Allowed functions : write
•Create a function that displays the memory area onscreen.
•The display of this memory area should be split into three "columns" separated
by a space:
◦The hexadecimal address of the ﬁrst line’s ﬁrst character followed by a ’:’.
◦The content in hexadecimal with a space each 2 characters and should be
padded with spaces if needed (see the example below).
◦The content in printable characters.
•If a character is non-printable, it’ll be replaced by a dot.
•Each line should handle sixteen characters.
•Ifsizeis equal to 0, nothing should be displayed.
18
*/
#include <stdio.h>
#include <unistd.h>

int	min(int a, int b)
{
	if (a < b)
		return (a);
	return (b);
}

// unsigned long value = (unsigned long) byte;
// printf("size %lu: %p = %lu\n", sizeof(byte), byte, value);
void	print_hex(unsigned long data, unsigned int nByte)
{
	const char		*hex;
	unsigned long	nibbles;

	hex = "0123456789abcdef";
	nibbles = nByte * 2;
	while (nibbles)
	{
		write(STDOUT_FILENO, hex + ((data >> (--nibbles * 4)) & 0xf), 1);
	}
}

/* prints the data as characters */
void	print_data(char *str, unsigned int n)
{
	if (!n)
		n = 16;
	while (n--)
	{
		if (*str > 31 && *str < 127)
			write(STDOUT_FILENO, str, 1);
		else
			write(STDOUT_FILENO, ".", 1);
		str++;
	}
}

void	print_line(void *addr, int nByte)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		if ((nByte - i) > 0)
			print_hex(*(char *)addr++, 1);
		else
			write(1, "  ", 2);
		if (i % 2)
			write(1, " ", 1);
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	while (size)
	{
		print_hex((unsigned long)addr, 8);
		write(1, ": ", 2);
		print_line(addr, min(size, 16));
		print_data(addr, min(size, 16));
		write(1, "\n", 1);
		addr += 16;
		if (size > 16)
			size -= 16;
		else
			size = 0;
	}
	return (addr);
}

int	main(void)
{
	char	*s;

	// char b = '\n';
	// s = "HAllo\n\tWorld et B on\0jour!.\0\0\\\0\0\0\0\0";
	s = "Bonjour les aminches...c. est fou.tout.ce qu on peut faire avec...\
	print_memory....lol.lol. .";
	// s = "012345678901234501234567890123450123456789012345";
	// for (size_t i = 0; i < 100; i++)
	{
		// printf("%p", s);
		ft_print_memory(s, 1777192);
		// printf("\n");
	}
	// for (int i = 0; i < 256; i++)
	// {
	// 	print_hex(i);
	// }
	return (0);
}


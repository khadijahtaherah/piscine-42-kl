/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanauman <hanauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 16:50:58 by hanauman          #+#    #+#             */
/*   Updated: 2024/03/28 14:36:07 by skhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Allowed functions : write
•Create a function that displays a string of characters onscreen. If this
string contains characters that aren’t printable, they’ll have to be displayed
in the shape of hexadecimals (lowercase), preceeded by a "backslash".
•For example :
Coucou\ntu vas bien ?
•The function should display :
Coucou\0atu vas bien ?
•Here’s how it should be prototyped :
void	ft_putstr_non_printable( char *str);
17
*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_hex(int i)
{
	int	unit;

	ft_putchar('\\');
	ft_putchar(i / 16 + '0');
	unit = i % 16;
	if (unit > 9)
		ft_putchar(unit - 10 + 'a');
	else
		ft_putchar(unit + '0');
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (*str > 31 && *str < 127)
			ft_putchar(*str);
		else
			print_hex(*str);
		str++;
	}
}

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
//	for (int i = 0; i < 32; i++)
//		print_hex(i);
	char *str = "hello\nbye";
	ft_putstr_non_printable(str);
}


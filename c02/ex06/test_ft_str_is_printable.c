/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_str_is_printable.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhairul <skhairul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 08:29:59 by skhairul          #+#    #+#             */
/*   Updated: 2024/03/27 09:02:54 by skhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int		ft_str_is_printable(char *str);

int	main(void)
{
	char *str;

	str = "My name \n is \n Ayush";
	//str = "12345678ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	//str = "! \"#$%\\&'()*+,-./:;<=>?@[|]^-`{~}";
	
	printf("Using ft_str_is_printable:\n");
	if (ft_str_is_printable(str) == 0)
	{
		printf("Strings has non-printable characters\n");
	}
	else
		printf("%s\n", str);

	printf("\nComparing with isprint():\n");
	int i = 0;
	while (str[i] != '\0')
	{
		if (isprint(str[i]) != 0)
			printf("%c", str[i]);
		else
			printf("Cannot print this %c", str[i]);
		i++;
	}
	return (0);
}

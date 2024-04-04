/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_str_is_uppercase.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhairul <skhairul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 11:19:03 by skhairul          #+#    #+#             */
/*   Updated: 2024/03/27 09:33:33 by skhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <ctype.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char	*str;

	//str = "HELLO";
	//str = "heLLo";
	str = "Banana 123 eat apple";
	//str = "banana";
	if (ft_str_is_uppercase(str) == 0)
		printf("string is not uppercase\n");
	else
		printf("STRING IS UPPERCASE YEAY\n");

	/* Test using isupper() 
	 * If uppercase - return nonzero value (TRUE)
	 * If not upper - return 0 (FALSE) */
	printf("\nTest using isupper():\n");
	int i = 0;
	while (str[i] != '\0')
	{
		if (isupper(str[i]) == 0)
			printf("String is not uppercase\n");
		else
			printf("STRING IS UPPERCASE\n");
		i++;
	}

	return (0);
}

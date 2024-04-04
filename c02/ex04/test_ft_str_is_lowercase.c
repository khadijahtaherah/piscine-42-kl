/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_str_is_lowercase.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhairul <skhairul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 11:19:03 by skhairul          #+#    #+#             */
/*   Updated: 2024/03/27 09:27:17 by skhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <ctype.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char	*str;

	//str = "HELLLLLO";
	str = "heLLo";
	//str = "apple eat bananana";
	//str = "apple";
	if (ft_str_is_lowercase(str) == 0)
		printf("STRING IS NOT LOWERCASE\n");
	else
		printf("string is lowercase\n");

	// Test using islower()
	// If the character is a lowercase letter - returns a nonzero value (TRUE); 
	// If not, the function returns 0 (FALSE)
	printf("\nComparing with islower()\n");
	int i = 0;
	while (str[i] != '\0')
	{
		if (islower(str[i]) == 0)
			printf("STRING IS NOT ALL LOWERCASE\n");
		else
			printf("String is lowercase\n");
		i++;
	}
	return (0);
}

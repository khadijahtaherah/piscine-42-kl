/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_str_is_numeric.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhairul <skhairul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 11:10:41 by skhairul          #+#    #+#             */
/*   Updated: 2024/03/27 09:17:21 by skhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char	*str;

	str = "1234 567890";
	if (ft_str_is_numeric(str) == 0)
		printf("String contain other than digits\n");
	else
		printf("String contains only digit\n");

	/* Using isdigit() */
	printf("\nCheck using isdigit():\n");
	int i = 0;
	while (str[i] != '\0')
	{
		if (isdigit(str[i])) //isdigit() - return TRUE or FALSE
			printf("String is numeric\n");
		else
			printf("String contains non-digit\n");
		i++;
	}
	return (0);
}

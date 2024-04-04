/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlowcase.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhairul <skhairul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 10:03:38 by skhairul          #+#    #+#             */
/*   Updated: 2024/03/27 10:13:08 by skhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

char	*ft_strlowcase(char *str);

int main(void)
{
	char input[] = "HI I am YouR FaTHER 123";
	char *str;
	char *str1;

	str = input;
	str1 = input;

	/* Using ft_strlowcase */
	str = ft_strlowcase(str);
	printf("Using ft_strlowcase:\n%s\n", str);

	/* Using tolower */
	printf("Comparing using tolower():\n");
	int i = 0;
	while (str1[i] != '\0')
	{
		str1[i] = tolower(str[i]);
		i++;
	}
	printf("%s\n", str1);

	return (0);
}



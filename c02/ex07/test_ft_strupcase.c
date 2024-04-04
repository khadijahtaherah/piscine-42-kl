/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strupcase.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhairul <skhairul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 11:40:10 by skhairul          #+#    #+#             */
/*   Updated: 2024/03/27 09:59:28 by skhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <ctype.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char input[] = "Hi im luke skywalker";
	char *str;
	char *str1;

	str = input;
	str1 = input;

	/* Using ft_strupcase */
	str = ft_strupcase(str);
	printf("Using ft_strupcase:\n");
	printf("%s\n", str);

	/* Using toupper() */
	printf("\nCompare using toupper():\n");
	int i = 0;
	while (str1[i] != '\0')
	{
		str1[i] = toupper(str1[i]);
		i++;
	}
	printf("%s\n", str1);
	return (0);
}

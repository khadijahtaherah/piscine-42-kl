/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhairul <skhairul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 13:51:33 by skhairul          #+#    #+#             */
/*   Updated: 2024/03/17 13:57:25 by skhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	printf("i = %d\n", i);
	return i; 
}

int		main()
{
	char *str = "hello world";
	int length;
	int length_b;

	length = ft_strlen(str);
	length_b = strlen(str);

	printf("Number of char in string = %d\n", length);
	printf("Number of char in string using strlen function = %d\n", length_b);
}

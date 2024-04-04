/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhairul <skhairul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 08:50:59 by skhairul          #+#    #+#             */
/*   Updated: 2024/04/01 09:06:13 by skhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*
#include <stdio.h>
#include <string.h>

int	main(int argc, char **argv)
{
	(void) argc;
	printf("Using ft_strlen:\nstr length: %d\n", ft_strlen(argv[1]));
	printf("Using strlen:\nstr length: %lu\n", strlen(argv[1]));
	return (0);
}*/

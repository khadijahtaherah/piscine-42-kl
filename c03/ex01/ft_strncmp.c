/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhairul <skhairul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 14:30:45 by skhairul          #+#    #+#             */
/*   Updated: 2024/04/01 12:25:40 by skhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int		i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(int argc, char **argv)
{
	(void) argc;
	int n = 3; 

	// Using ft_strcmp 
	printf("Using ft_strcmp():\n");
	if (ft_strncmp(argv[1], argv[2], n) == 0)
		printf("s1 and s2 are equal: s1: %s, s2:%s\n", argv[1], argv[2]);
	else if (ft_strncmp(argv[1], argv[2], n) > 0)
		printf("s1 is larger than s2\n");
	else
		printf("s1 is smaller than s2\n");
	
	// Using strcmp()
	printf("\nUsing strcmp():\n");
	if (strncmp(argv[1], argv[2], n) == 0)
		printf("s1 and s2 are equal: s1: %s, s2:%s\n", argv[1], argv[2]);
	else if (strncmp(argv[1], argv[2], n) > 0)
		printf("s1 is larger than s2\n");
	else
		printf("s1 is smaller than s2\n");

	return (0);
}
*/

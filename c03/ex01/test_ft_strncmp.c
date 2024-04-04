/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strncmp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhairul <skhairul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 14:44:33 by skhairul          #+#    #+#             */
/*   Updated: 2024/03/28 17:29:36 by skhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(int argc, char **argv)
{
	(void) argc;
	int n = 3; 
	/* Using ft_strcmp */
	printf("Using ft_strcmp():\n");
	if (ft_strncmp(argv[1], argv[2], n) == 0)
		printf("s1 and s2 are equal: s1: %s, s2:%s\n", argv[1], argv[2]);
	else if (ft_strncmp(argv[1], argv[2], n) > 0)
		printf("s1 is larger than s2\n");
	else
		printf("s1 is smaller than s2\n");
	
	/* Using strcmp() */
	printf("\nUsing strcmp():\n");
	if (strncmp(argv[1], argv[2], n) == 0)
		printf("s1 and s2 are equal: s1: %s, s2:%s\n", argv[1], argv[2]);
	else if (strncmp(argv[1], argv[2], n) > 0)
		printf("s1 is larger than s2\n");
	else
		printf("s1 is smaller than s2\n");

	return (0);
}


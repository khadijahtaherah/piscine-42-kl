/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strcmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhairul <skhairul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 14:44:33 by skhairul          #+#    #+#             */
/*   Updated: 2024/04/01 12:17:04 by skhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(int argc, char **argv)
{
	(void) argc;

	/* Using ft_strcmp */
	printf("Using ft_strcmp():\n");
	if (ft_strcmp(argv[1], argv[2]) == 0)
		printf("s1 and s2 are equal: s1: %s, s2:%s\n", argv[1], argv[2]);
	else if (ft_strcmp(argv[1], argv[2]) > 0)
		printf("s1 is larger than s2\n");
	else
		printf("s1 is smaller than s2\n");
	
	/* Using strcmp() */
	printf("\nUsing strcmp():\n");
	if (strcmp(argv[1], argv[2]) == 0)
		printf("s1 and s2 are equal: s1: %s, s2:%s\n", argv[1], argv[2]);
	else if (strcmp(argv[1], argv[2]) > 0)
		printf("s1 is larger than s2\n");
	else
		printf("s1 is smaller than s2\n");

	return (0);
}

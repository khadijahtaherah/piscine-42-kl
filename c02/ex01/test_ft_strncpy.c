/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strncpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhairul <skhairul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 08:53:59 by skhairul          #+#    #+#             */
/*   Updated: 2024/03/27 17:44:56 by skhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>
#include <stdlib.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);
int		ft_strlen(char *str);

int	main(void)
{
	char	dest[16] = {0};
	char	*src;

	//dest = malloc(sizeof(char));
	src = "Apple eat banana";
	//strncpy(dest, src, 50);
	ft_strncpy(dest, src, 10);
	printf("dest: %s\n", dest);
	printf("len dest: %lu\n", strlen(dest));
	//free(dest);
	return (0);
}

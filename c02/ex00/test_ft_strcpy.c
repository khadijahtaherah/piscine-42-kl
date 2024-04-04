/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhairul <skhairul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 08:29:21 by skhairul          #+#    #+#             */
/*   Updated: 2024/03/27 12:01:53 by skhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>
#include <stdlib.h>

void	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	*dest;
	char	*src;

	dest = malloc(sizeof(char));
	src = "Luke Skywalker likes apple pie";
	//strcpy(dest, src);
	ft_strcpy(dest, src);
	printf("Dest: %s, string length: %lu\n", dest, strlen(dest));
	free(dest);
	return (0);
}

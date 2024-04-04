/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhairul <skhairul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 15:40:31 by skhairul          #+#    #+#             */
/*   Updated: 2024/04/04 15:54:54 by skhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*range;
	int	i;

	size = max - min;
	range = malloc(sizeof(int) * size);
	if (range == NULL)
		return (NULL);
	if (min >= max)
		return (NULL);
	i = 0;
	while (min < max)
	{
		range[i] = min++;
		i++;
	}
	return (range);
}
/*
#include <stdio.h>

int	main(void)
{
	int	min = 3;
	int max = 12;
	int i = 0;
	int *range = ft_range(min, max);

	while (range[i])
	{
		printf("%d\n", range[i]);
		i++;
	}
	return (0);
}*/

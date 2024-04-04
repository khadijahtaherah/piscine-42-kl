/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhairul <skhairul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 15:56:52 by skhairul          #+#    #+#             */
/*   Updated: 2024/04/04 18:02:09 by skhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*result;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	result = malloc(sizeof(int) * (max - min));
	if (result == NULL)
		return (-1);
	i = 0;
	while (min < max)
	{
		result[i] = min++;
		i++;
	}
	*range = result;
	return (i);
}
/*
#include <stdio.h>

int	main(void)
{
	int min = 0;
	int max = 9;
	int *range;
	int size = ft_ultimate_range(&range, min, max);

	printf("%d\n", size);
	int i = 0;

	while (i < size)
	{
		printf("%d\n", range[i]);
		i++;
	}
	return (0);
}*/

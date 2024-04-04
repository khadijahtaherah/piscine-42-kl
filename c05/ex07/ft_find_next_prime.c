/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhairul <skhairul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 12:46:23 by skhairul          #+#    #+#             */
/*   Updated: 2024/04/04 14:09:32 by skhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_prime(int nb)
{
	int	i;

	if (nb == 2 || nb == 3)
		return (1);
	i = 2;
	while (i <= nb)
	{
		if (nb % i == 0)
		{
			if (nb == i)
				return (1);
			else
				return (0);
		}
		i++;
	}
	return (0);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	if (nb == 2 || nb == 3)
		return (nb);
	while (nb)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		nb++;
	}
	return (nb);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_find_next_prime(18));
	return (0);
}*/

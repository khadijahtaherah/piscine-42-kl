/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhairul <skhairul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 09:51:25 by skhairul          #+#    #+#             */
/*   Updated: 2024/04/04 10:46:04 by skhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (power--)
		res = res * nb;
	return (res);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("num: %d, power:%d = %d\n", 50, 4, ft_iterative_power(50, 4));
	return (0);
}*/

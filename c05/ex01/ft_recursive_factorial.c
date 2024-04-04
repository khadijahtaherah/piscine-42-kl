/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhairul <skhairul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 09:30:19 by skhairul          #+#    #+#             */
/*   Updated: 2024/04/04 09:49:26 by skhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Recursion - a function called by itself. 
 * Has to has a base case to terminate recursion
 * Factorial formula: 
 * */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
/*
#include <stdio.h>

int	main(void)
{
	printf("fact using recursion: %d\n", ft_recursive_factorial(-12));
	return (0);
}*/

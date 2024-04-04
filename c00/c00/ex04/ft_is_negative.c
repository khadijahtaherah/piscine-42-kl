/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhairul <skhairul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 12:22:59 by skhairul          #+#    #+#             */
/*   Updated: 2024/03/17 12:19:55 by skhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	sign;

	if (n >= 0)
	{
		sign = 'P';
		write(1, &sign, 1);
	}
	else
	{
		sign = 'N';
		write(1, &sign, 1);
	}
}

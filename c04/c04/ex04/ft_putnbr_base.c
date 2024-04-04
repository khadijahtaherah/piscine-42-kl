/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhairul <skhairul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 10:15:09 by skhairul          #+#    #+#             */
/*   Updated: 2024/04/03 11:43:03 by skhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	is_valid_base(int i, char *base)
{
	char	*repeat;
	int		j;

	i = 0;
	repeat = base;
	while (base[i])
	{
		if ((base[i] < 'a' || base[i] > 'z') && (base[i] < 'A'
				|| base[i] > 'Z') && (base[i] < '0' || base[i] > '9'))
			return (0);
		j = i + 1;
		while (repeat[j])
		{
			if (base[i] == repeat[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr(int nbr, int i, char *base)
{
	long	nbl;
	char	*base_temp;

	nbl = nbr;
	base_temp = base;
	if (nbl < 0)
	{
		write(1, "-", 1);
		nbl = -nbl;
	}
	if (nbl >= i)
		ft_putnbr(nbl / i, i, base_temp);
	write(1, &base_temp[nbl % i], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	if (i < 2)
		return ;
	if (is_valid_base(i, base))
		ft_putnbr(nbr, i, base);
}
/*
int	main(void)
{
	char	*base;

	base = "0123456789abcdef";
	ft_putnbr_base(-2147483648, base);
	return (0);
}*/

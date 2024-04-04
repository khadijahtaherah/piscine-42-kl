/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhairul <skhairul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 12:59:41 by skhairul          #+#    #+#             */
/*   Updated: 2024/03/26 13:43:47 by skhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void	ft_swap(int *a, int *b)
{
	int		temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int a = 5;
	int b = 4; 
	
	int *ptr_a;
	int *ptr_b;

	ptr_a = &a;
	ptr_b = &b;

	ft_swap(ptr_a, ptr_b);
	printf("a = %d b = %d\n", a, b);
}

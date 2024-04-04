/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ultimate_div_mod.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhairul <skhairul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 13:31:49 by skhairul          #+#    #+#             */
/*   Updated: 2024/03/26 12:55:06 by skhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int		main()
{
	int a;
	int b;

	a = 19;
	b = 5; 

	printf("without ptr: div = %d, mod = %d\n", a/b, a%b);

	ft_ultimate_div_mod(&a, &b);
	printf("with ptr: div = %d, mod = %d\n", a, b);
}

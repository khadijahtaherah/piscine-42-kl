/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_div_mod.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhairul <skhairul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 13:08:28 by skhairul          #+#    #+#             */
/*   Updated: 2024/03/26 12:53:38 by skhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int main()
{
	int a, b;
	int *div;
	int *mod;

	a = 19;
	b = 5;
	
	printf("Without using pointers: div = %d, mod = %d\n\n", a / b, a % b);
	div = &a;
	mod = &b;
	printf("Using pointers:\n");
	ft_div_mod(a, b, div, mod);
	printf("a / b = %d\n", *div);
	printf("a mod b = %d\n", *mod);
}

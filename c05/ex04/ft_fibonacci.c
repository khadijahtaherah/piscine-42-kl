/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhairul <skhairul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 11:59:55 by skhairul          #+#    #+#             */
/*   Updated: 2024/04/04 12:09:12 by skhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The Fibonacci sequence is a series of numbers where
each number is the sum of the two preceding ones - usually start with 0 and 1. 
In mathematical terms, the sequence is defined recursively as:

F(0)=0
F(1)=1
F(n)=F(n−1)+F(n−2)

So, the sequence goes: 0, 1, 1, 2, 3, 5, 8, 13, 21, and so on.

How the Fibonacci sequence is generated:

Base cases: The first two numbers in the Fibonacci sequence are 0 and 1.
Recursive rule: Each subsequent numb in the sequence (start from the 3rd numb) 
is the sum of the two preceding numb
*/

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_fibonacci(3));
	return (0);
}*/

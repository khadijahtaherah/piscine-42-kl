/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin- <muhabin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 14:42:01 by muhabin-          #+#    #+#             */
/*   Updated: 2024/03/24 14:44:20 by muhabin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/* Function prototype */
void	ft_putchar(char c);

/* 
* Print characters to console output
*/
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

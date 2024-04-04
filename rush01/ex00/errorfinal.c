/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errorfinal.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin- <muhabin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 14:40:17 by muhabin-          #+#    #+#             */
/*   Updated: 2024/03/24 16:46:58 by skhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/* Define */
#define ROW 4
#define COL 4

/* Function prototype */
int		check_is_valid(char *c);
int		is_array_out_of_bound(char *c);
int		is_specified_char(char *c);
int		is_opposite_valid(char *c, int i, int j);
int		is_opposite_four_valid(char *c, int i, int j);
int		is_corner_valid(char *c, int i);
int		is_one_exist(char *c);
void	print_error_message(void);
void	ft_putchar(char c);

/* 
* Check for all errors
* Return 1 if there is error
* Return 0 if all okay 
*/
int	check_is_valid(char *c)
{
	if (is_array_out_of_bound(c) != 0)
		print_error_message();
	else if (is_specified_char(c) != 0)
		print_error_message();
	else if (is_opposite_valid(c, 0, 8) != 0)
		print_error_message();
	else if (is_opposite_valid(c, 8, 16) != 0)
		print_error_message();
	else if (is_corner_valid(c, 0) != 0)
		print_error_message();
	else if (is_one_exist(c) != 0)
		print_error_message();
	else
		return (0);
	return (1);
}

/* 
* Check if input array is more than full index (ROW * COL + 1)
* Return 1 if there is error
* Return 0 if all okay 
*/
int	is_array_out_of_bound(char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
	{
		i++;
	}
	if (i != 16)
	{
		return (1);
	}
	return (0);
}

/* 
* Check if input array only contains '1' to '4' 
* Return 1 if there is error
* Return 0 if all okay 
*/
int	is_specified_char(char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
	{
		if (c[i] < '1' || c[i] > '4')
		{
			return (1);
		}
		i++;
	}
	return (0);
}

/* 
* Check if opposite cell can make up for blocks 1 to 4
* Example: '1' cannot have '1' on the opposite side
* Else, blocks 1 to 4 cannot be placed
* Return 1 if there is error
* Return 0 if all okay 
*/
int	is_opposite_valid(char *c, int i, int j)
{
	while (i < j)
	{
		if (c[i] == '1' && c[i + 4] == '1')
		{
			return (1);
		}
		if (c[i] == '3' && c[i + 4] == '3')
		{
			return (1);
		}
		if (c[i] == '4')
		{
			return (is_opposite_four_valid(c, i, j));
		}
		i++;
	}
	return (0);
}

/* 
* Check if adjacent cell is '4'
* If '4' and '4', blocks 1 to 4 cannot be placed
* Return 1 if there is error
* Return 0 if all okay 
*/
int	is_opposite_four_valid(char *c, int i, int j)
{
	if (i < j / 2)
	{
		if (c[i + 4] == '4' || c[i + 4] == '3' || c[i + 4] == '2')
		{
			return (1);
		}
	}
	if (i >= j / 2)
	{
		if (c[i - 4] == '4' || c[i - 4] == '3' || c[i - 4] == '2')
		{
			return (1);
		}
	}
	return (0);
}

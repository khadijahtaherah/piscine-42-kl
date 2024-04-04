/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin- <muhabin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 14:44:35 by muhabin-          #+#    #+#             */
/*   Updated: 2024/03/24 14:45:30 by muhabin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/* Function prototype */
void	split_string(char *str, char *chars);
void	split_array(int index, int limit, char *str, char *chars);

/* 
* Eliminates spaces in input array
* Obtain only number input ('1' to '4')
*/
void	split_string(char *str, char *chars)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			chars[j] = str[i];
			j++;
		}
		i++;
	}
	chars[j] = '\0';
}

/* 
* Split input array into four array: col_up, col_down, row_left, row_right
* Index: starting index for respective array (col_up[0], col_down[4], ..)
* Limit: last index for respective array (col_up[3], col_down[7], ..)
*/
void	split_array(int index, int limit, char *str, char *chars)
{
	int	i;

	i = 0;
	while (i < limit)
	{
		chars[i] = str[index];
		i++;
		index++;
	}
	chars[i] = '\0';
}

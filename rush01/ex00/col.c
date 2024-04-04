/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   col.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin- <muhabin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 14:45:43 by muhabin-          #+#    #+#             */
/*   Updated: 2024/03/24 17:58:53 by skhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/* Define */
#define ROW 4
#define COL 4

/* Function prototype */
void	set_col_one_four(char *col_up, char *col_down, char **grid);
void	first_row(int i, char *col, char **grid);
void	last_row(int i, char *col, char **grid);

/* 
* Iterate through the first row - first column
* Check for '1' and '4'
*/
void	set_col_one_four(char *col_up, char *col_down, char **grid)
{
	int		i;

	i = 0;
	while (i < ROW)
	{
		if (i == 0)
		{
			first_row(i, col_up, grid);
		}
		else if (i == ROW - 1)
		{
			last_row(i, col_down, grid);
		}
		i++;
	}
}

/* 
* Iterate through col_up array to fill first row
* If grid[0][0] == '4', then the whole col will be filled with blocks 1 to 4
*/
void	first_row(int i, char *col, char **grid)
{
	int		j;

	j = 0;
	while (j < COL)
	{
		if (col[j] == '1')
		{
			grid[i][j] = '4';
		}
		if (col[j] == '4')
		{
			grid[i][j] = '1';
			grid[i + 1][j] = '2';
			grid[i + 2][j] = '3';
			grid[i + 3][j] = '4';
		}
		j++;
	}
}

/* 
* Iterate throught the col_down array to fill last row
* If grid[3][0] == '4', then the whole col will be filled with blocks 1 to 4
*/
void	last_row(int i, char *col, char **grid)
{
	int	j;

	j = 0;
	while (j < COL)
	{
		if (col[j] == '1')
		{
			grid[i][j] = '4';
		}
		if (col[j] == '4')
		{
			grid[i][j] = '1';
			grid[i - 1][j] = '2';
			grid[i - 2][j] = '2';
			grid[i - 3][j] = '2';
		}
		j++;
	}
}

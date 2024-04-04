/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gameplay.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin- <muhabin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 14:45:43 by muhabin-          #+#    #+#             */
/*   Updated: 2024/03/24 17:08:02 by skhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/* Define */
#define ROW 4
#define COL 4

/* Function prototype */
void	set_row_one_four(char *row_left, char *row_right, char **grid);
void	first_col(int j, char *row, char **grid);
void	last_col(int j, char *row, char **grid);

/* 
* Iterate through the first column - first row
*/
void	set_row_one_four(char *row_left, char *row_right, char **grid)
{
	int	j;

	j = 0;
	while (j < COL)
	{
		if (j == 0)
		{
			first_col(j, row_left, grid);
		}
		else if (j == COL - 1)
		{
			last_col(j, row_right, grid);
		}
		j++;
	}
}

/* 
* Iterate through row_left array to fill first column
* If grid[0][0] == '4', then the whole row will be filled with blocks 1 to 4
*/
void	first_col(int j, char *row, char **grid)
{
	int	i;

	i = 0;
	while (i < ROW)
	{
		if (row[i] == '1' && grid[i][j] != '4')
		{
			grid[i][j] = '4';
		}
		if (row[i] == '4')
		{
			if (grid[i][j] != '1')
			{
				grid[i][j] = '1';
			}
			if (grid[i][j + 1] == '*' || grid[i][j + 2] == '*'
					|| grid[i][j + 3] == '*')
			{
				grid[i][j + 1] = '2';
				grid[i][j + 2] = '3';
				grid[i][j + 3] = '4';
			}
		}
		i++;
	}
}

/* 
* Iterate through row_right array to fill last column
* If grid[0][0] == '4', then the whole row will be filled with blocks 1 to 4
*/
void	last_col(int j, char *row, char **grid)
{
	int	i;

	i = 0;
	while (i < ROW)
	{
		if (row[i] == '1' && grid[i][j] != '4')
		{
			grid[i][j] = '4';
		}
		if (row[i] == '4')
		{
			if (grid[i][j] != '1')
			{
				grid[i][j] = '1';
			}
			grid[i][j - 1] = '2';
			grid[i][j - 2] = '3';
			grid[i][j - 3] = '4';
		}
		i++;
	}
}

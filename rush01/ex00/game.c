/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin- <muhabin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 14:45:43 by muhabin-          #+#    #+#             */
/*   Updated: 2024/03/24 16:30:17 by muhabin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/* Define */
#define ROW 4
#define COL 4

/* Function prototype */
void	dynamically_allocated_grid(char ***grid);
void	intialize_grid(char **grid);
void	play_game(char **grid, char *chars);
void	print_grid(char **grid);
void	free_grid(char **grid);
void	split_array(int index, int limit, char *str, char *chars);
void	ft_putchar(char c);
void	set_col_one_four(char *col_up, char *col_down, char **grid);
void	first_row(int i, char *col, char **grid);
void	last_row(int i, char *col, char **grid);
void	set_row_one_four(char *row_left, char *row_right, char **grid);
void	first_col(int j, char *row, char **grid);
void	last_col(int j, char *row, char **grid);

/* Allocate memory for grid */
void	dynamically_allocated_grid(char ***grid)
{
	int		i;

	i = 0;
	*grid = (char **)malloc(ROW * sizeof (char *));
	while (i < ROW)
	{
		(*grid)[i] = (char *) malloc(COL * sizeof (char));
		i++;
	}
}

/* Initialize grid cell with '*' character */
void	intialize_grid(char **grid)
{
	int		i;
	int		j;

	i = 0;
	while (i < ROW)
	{
		j = 0;
		while (j < COL)
		{
			grid[i][j] = '*';
			j++;
		}
		i++;
	}
}

/* 
* Function to start the game 
* Created arrays for colUp, colDown, rowLeft, rowRight
* from input
*/
void	play_game(char **grid, char *chars)
{
	char	col_up[COL + 1];
	char	col_down[COL + 1];
	char	row_left[ROW + 1];
	char	row_right[ROW + 1];

	split_array(0, COL, chars, col_up);
	split_array(4, COL, chars, col_down);
	split_array(8, ROW, chars, row_left);
	split_array(12, ROW, chars, row_right);
	set_col_one_four(col_up, col_down, grid);
	set_row_one_four(row_left, row_right, grid);
	print_grid(grid);
}

/* 
* Function to print the grid
*/
void	print_grid(char **grid)
{
	int	i;
	int	j;

	i = 0;
	while (i < ROW)
	{
		j = 0;
		while (j < COL)
		{
			ft_putchar(grid[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
	free_grid(grid);
}

/* 
* Function to free memory
*/
void	free_grid(char **grid)
{
	int	i;

	i = 0;
	while (i < ROW)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}

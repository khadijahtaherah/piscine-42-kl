/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin- <muhabin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 14:47:45 by muhabin-          #+#    #+#             */
/*   Updated: 2024/03/24 15:31:56 by skhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int		game(int argc, char **argv);
void	game_setup(char *chars);
int		check_is_valid(char *c);
int		is_array_out_of_bound(char *c);
int		is_specified_char(char *c);
int		is_opposite_valid(char *c, int i, int j);
int		is_opposite_four_valid(char *c, int i, int j);
int		is_corner_valid(char *c, int i);
int		is_one_exist(char *c);
void	split_string(char *str, char *chars);
void	split_array(int index, int limit, char *str, char *chars);
void	dynamically_allocated_grid(char ***grid);
void	intialize_grid(char **grid);
void	play_game(char **grid, char *chars);
void	set_col_one_four(char *col_up, char *col_down, char **grid);
void	first_row(int i, char *col, char **grid);
void	last_row(int i, char *col, char **grid);
void	set_row_one_four(char *row_left, char *row_right, char **grid);
void	first_col(int j, char *row, char **grid);
void	last_col(int j, char *row, char **grid);
void	print_grid(char **grid);
void	free_grid(char **grid);
void	print_error_message(void);
void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	game(argc, argv);
	return (0);
}

/* 
* Function to check argc and argv
*/
int	game(int argc, char **argv)
{	
	char	chars[50];

	if (argc != 2)
	{
		print_error_message();
		return (1);
	}
	else
	{
		split_string(argv[1], chars);
		if (check_is_valid(chars) == 0)
		{
			game_setup(chars);
		}
	}
	return (0);
}

/* 
* Function to setup the game
*/
void	game_setup(char *chars)
{
	char	**grid;

	dynamically_allocated_grid(&grid);
	intialize_grid(grid);
	play_game(grid, chars);
}

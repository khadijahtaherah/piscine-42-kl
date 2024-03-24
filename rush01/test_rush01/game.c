#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "all_functions.h"

/* Define */
#define ROW 4
#define COL 4

/* Function prototype */
void dynamically_allocated_grid(char ***grid);
void intialize_grid(char **grid);
void play_game(char **grid, char *chars);
void set_col_one_four(char *col_up, char *col_down, char **grid);
void first_row(int i, char *col, char **grid);
void last_row(int i, char *col, char **grid);
void set_row_one_four(char *row_left, char *row_right, char **grid);
void	first_col(int j, char *row, char **grid);
void	last_col(int j, char *row, char **grid);
void print_grid(char **grid);
void split_array(int index, int limit, char *str, char* chars);

void dynamically_allocated_grid(char ***grid)
{
  int i;

  i = 0;
  *grid = (char**)malloc(ROW * sizeof(char *));
  while (i < ROW)
  {
    (*grid)[i] = (char*)malloc(COL * sizeof(char));
    i++;
  }
}

void intialize_grid(char **grid)
{
  int i;
  int j;
  
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

void play_game(char **grid, char *chars)
{
  char col_up[COL + 1];
  char col_down[COL + 1];
  char row_left[ROW + 1];
  char row_right[ROW + 1];

  split_array(0, COL, chars, col_up);
  split_array(4, COL, chars, col_down);
  split_array(8, ROW, chars, row_left);
  split_array(12, ROW, chars, row_right);
  set_col_one_four(col_up, col_down, grid);
	set_row_one_four(row_left, row_right, grid);
  print_grid(grid);
}

void set_col_one_four(char *col_up, char *col_down, char **grid)
{
  int i; 
  
	i = 0;
	while (i < ROW)
  {
		if (i == 0) // row 1
		{
			first_row(i, col_up, grid); 
		}
		else if (i == ROW - 1)
		{
			last_row(i, col_down, grid);
		}
		else
		{
			;// iterate the rest
		}
		i++;
	}
}

void	first_row(int i, char *col, char **grid)
{
	int j;

	j = 0;
	while (j < COL)
	{
		if (col[j] == '1')
		{
			grid[i][j] = '4';
		}
		if (col[j] == '4')
		{
			grid[i][j] = '1';				//grid[0][j]
			grid[i + 1][j] = '2';		//grid[1][j]
			grid[i + 2][j] = '3';		//grid[2][j]
			grid[i + 3][j] = '4';		//grid[3][j]
		}
		j++;
	}
}

void	last_row(int i, char *col, char **grid)
{
	int j;

	j = 0;
	while(j < COL)
	{
		if (col[j] == '1')
		{
			grid[i][j] = '4';
		}
		if (col[j] == '4')
		{
			grid[i][j] = '1';				//grid[3][j]
			grid[i - 1][j] = '2';		//grid[2][j]
			grid[i - 2][j] = '2';		//grid[1][j]
			grid[i - 3][j] = '2';		//grid[0][j]
		}
		j++;
	}
}

void set_row_one_four(char *row_left, char *row_right, char **grid)
{
  int j; 
  
	j = 0;
	while (j < COL)
  {
		if (j == 0) // col 1
		{
			first_col(j, row_left, grid); 
		}
		else if (j == COL - 1) // last col
		{
			last_col(j, row_right, grid);
		}
		else
		{
			;// iterate the rest
		}
		j++;
	}
}

void	first_col(int j, char *row, char **grid)
{
	int i;

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
			if (grid[i][j + 1] != '*' || grid[i][j + 2] != '*' || grid[i][j + 3] != '*')
			{
				//error
			}
			else{
				grid[i][j + 1] = '2'; 
				grid[i][j + 2] = '3';
				grid[i][j + 3] = '4';
			}
		}
		i++;
	}
}

void	last_col(int j, char *row, char **grid)
{
	int i;

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

void print_grid(char **grid)
{
  int i;
  int j;
  
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
}
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define ROW 4
#define COL 4

void dynamically_allocated_grid(char ***grid);
void intialize_grid(char **grid);
void play_game(char **grid);
void set_col_one_four(char *col_up, char *col_down, char **grid);
void first_row(int i, char *col, char **grid);
void last_row(int i, char *col, char **grid);
void set_row_one_four(char *row_left, char *row_right, char **grid);
void	first_col(int j, char *row, char **grid);
void	last_col(int j, char *row, char **grid);
void print_grid(char **grid);
void free_memory(char **grid);
void ft_putchar(char c);

int main()
{
  char **grid;
	dynamically_allocated_grid(&grid);
	intialize_grid(grid);
	play_game(grid);
  return 0;
}

void play_game(char **grid)
{
	char *col_up = "4321";
  char *col_down = "1222";
	char *row_left = "4321";
	char *row_right = "1222";
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
		if (row[i] == '4' && grid[i][j] != '1')
		{
			grid[i][j] = '1';
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
		if (row[i] == '4' && grid[i][j] != '1')
		{
			grid[i][j] = '1';
		}
		i++;
	}
}

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
	free_memory(grid);
}

void free_memory(char **grid)
{
	int i;
  
  i = 0;
  while (i < ROW)
  {
		free(grid[i]);
    i++;
  }
	free(grid);
}

void  ft_putchar(char c)
{
  write(1, &c, 1);
}

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define ROW 4
#define COL 4

void dynamically_allocated_grid(char ***grid);
void intialize_grid(char **grid);
void print_grid(char **grid);
void free_memory(char **grid);
void first_row(int i, char col[4], char **grid);
void last_row(int i, char col[4], char **grid);
void ft_putchar(char c);

int main() {
    char **grid;
		dynamically_allocated_grid(&grid);
		intialize_grid(grid);
		
		
    char col_up[4] = {'4', '3', '2', '1'};
    char col_down[4] = {'1', '2', '2', '2'};
//    char rowLeft[4] = {'4', '3', '2', '1'};
//    char rowRight[4] = {'1', '2', '2', '2'};

    int i; 
    // Initialize grid
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
	print_grid(grid);
  return 0;
}

void	first_row(int i, char col[4], char **grid)
{
	int j;

	j = 0;
	while (j < 4)
	{
		if (col[j] == '1')
		{
			grid[i][j] = '4';
		}
		if (col[j] == '4')
		{
			grid[i][j] = '1';
		}
		j++;
	}
}

void	last_row(int i, char col[4], char **grid)
{
	int j;

	j = 0;
	while(j < 4)
	{
		if (col[j] == '1')
		{
			grid[i][j] = '4';
		}
		if (col[j] == '4')
		{
			grid[i][j] = '1';
		}
		j++;
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

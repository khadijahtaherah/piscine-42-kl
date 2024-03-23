#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/* Define */
#define ROW 4
#define COL 4

/* Function prototype */
void dynamically_allocated_grid(char ***grid);
void intialize_grid(char **grid);
void print_grid(char **grid);
void ft_putchar(char c);

int main()
{
  char **grid;
  dynamically_allocated_grid(&grid);
  intialize_grid(grid);
  print_grid(grid);
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
}

void  ft_putchar(char c)
{
  write(1, &c, 1);
}
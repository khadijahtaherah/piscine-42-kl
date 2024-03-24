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
  
  print_grid(grid);
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
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "all_functions.h"

int game(int argc, char** argv);
void play_game(char *chars);

int	main(int argc, char** argv)
{
  game(argc, argv);
  return (0);
}

int game(int argc, char** argv)
{
  char chars[50];
  
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
      play_game(chars);
    }
	}
  return (0);
}

void play_game(char *chars)
{
  char **grid;
  char col_up[COL + 1];
  char col_down[COL + 1];
  char row_left[ROW + 1];
  char row_right[ROW + 1];

  split_array(0, COL, chars, col_up);
  split_array(4, COL, chars, col_down);
  split_array(8, ROW, chars, row_left);
  split_array(12, ROW, chars, row_right);
  dynamically_allocated_grid(&grid);
  intialize_grid(grid);
  print_grid(grid);
}


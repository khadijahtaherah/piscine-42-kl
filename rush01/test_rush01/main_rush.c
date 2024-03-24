#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "all_functions.h"

int game(int argc, char** argv);
void game_setup(char *chars);

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
      game_setup(chars);
    }
	}
  return (0);
}

void game_setup(char *chars)
{
  char **grid;
  
  dynamically_allocated_grid(&grid);
  intialize_grid(grid);
  play_game(grid, chars);
}


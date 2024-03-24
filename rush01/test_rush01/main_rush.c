#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "all_functions.h"

int game_setup(int argc, char** argv);

int	main(int argc, char** argv)
{
  game_setup(argc, argv);
  return (0);
}

int game_setup(int argc, char** argv)
{
  char chars[50];
  char **grid;

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
      dynamically_allocated_grid(&grid);
      intialize_grid(grid);
      print_grid(grid);
    }
	}
  return (0);
}
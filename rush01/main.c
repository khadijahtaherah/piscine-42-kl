#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/* Define */
#define ROW 4
#define COL 4

/* Function prototype */
void split_string(char *str, char *c);
void dynamically_allocated_grid(char ***grid);
void intialize_grid(char **grid);
void print_grid(char **grid);
void ft_putchar(char c);
void  check_is_valid(char *c);
int		is_array_out_of_bound(char *c);
int		is_specified_char(char *c);
int		is_opposite_valid(char *c, int i, int j);
int		is_corner_valid(char *c, int i);
void	print_error_message();

int	main(int argc, char** argv)
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
		check_is_valid(chars);
	}
  dynamically_allocated_grid(&grid);
  intialize_grid(grid);
  print_grid(grid);
	return (0);
}

void split_string(char *str, char *c)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			c[j] = str[i];
			j++;
		}	
		i++;
	}
	c[j] = '\0';
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

void	check_is_valid(char *c)
{
		if (is_array_out_of_bound(c) != 0)
		{
			print_error_message();
		}
		else if (is_specified_char(c) != 0)
		{
			print_error_message();
		}
		else if (is_opposite_valid(c, 0, 8) != 0)
		{
			print_error_message();
		}
		else if (is_opposite_valid(c, 8, 16) != 0)
		{
			print_error_message();
		}
		else if (is_corner_valid(c, 0) != 0)
		{
			print_error_message();
		}
}

int		is_array_out_of_bound(char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		i++;
	}
	if (i != 16)
	{
		return (1);
	}
	return (0);
}

int		is_specified_char(char *c)
{
	int i;

	i = 0;
	while (c[i] != '\0')
	{
		if (c[i] < '1' || c[i] > '4')
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int		is_opposite_valid(char *c, int i, int j)
{
	while (i < j)
	{
		// check for '1' and '3'
		if ((c[i] == '1' && c[i + 4] == '1') || (c[i] == '3' && c[i + 4] == '3'))
		{
			return (1);
		}
		if (c[i] == '4')
		{
			if ((i < j / 2 && (c[i + 4] == '4' || c[i + 4] == '3' || c[i + 4] == '2')) ||
						(i >= j / 2 && (c[i - 4] == '4' || c[i - 4] == '3' || c[i - 4] == '2')))
			{
				return (1);
			}
		}
		i++;
	}
	return (0);
}

int		is_corner_valid(char *c, int i)
{
	while (c[i] != '\0')
	{
		if ((c[0] == '4' && c[8] == '1') || (c[0] == '1' && c[8] == '4'))
		{
			return (1);
		}
		if ((c[4] == '4' && c[11] == '1') || (c[4] == '1' && c[11] == '4'))
		{
			return (1);
		}
		if ((c[3] == '4' && c[12] == '1') || (c[3] == '1' && c[12] == '4'))
		{
			return (1);
		}
		if ((c[7] == '4' && c[15] == '1') || (c[7] == '1' && c[15] == '4'))
		{
			return (1);
		}
		i++;
	}
	return (0);
}

void	print_error_message()
{
	char *error = "Error! Input is not valid\n";
	int i;

	i = 0;
	while (error[i] != '\0')
	{
		ft_putchar(error[i]);
		i++;
	}
}

void  ft_putchar(char c)
{
  write(1, &c, 1);
}
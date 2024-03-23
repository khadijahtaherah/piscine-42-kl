#include <stdio.h>
#include <unistd.h>

void	print_error_message()
{
	char *error = "Sorry, input is not valid\n";
	int i;

	i = 0;
	while (error[i] != '\0')
	{
		write(1, &error[i], 1);
		i++;
	}
}

int		is_column_row_valid(char *c, int i, int j)
{
	while (i < j)
	{
		// check for '1' and '3'
		if ((c[i] == '1' && c[i + 4] == '1') || 
				(c[i] == '3' && c[i + 4] == '3'))
		{
			return (1);
		}
		if (c[i] == '4')
		{
			if (c[i + 4] == '4' || c[i + 4] == '3' || c[i + 4] == '2')
			{
				return(1);
			}
		}	
		i++;
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

int		is_array_out_of_bound(char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		i++;
	}
	printf("i: %d\n", i);
	
	if (i != 16)
	{
		return (1);
	}
	return (0);
}

void	check_is_valid(int argc, char *c)
{
	if (argc > 2)
	{
		printf("argc > 2\n");
		print_error_message();
	}
	else
	{
		if (is_array_out_of_bound(c) != 0)
		{
			//printf("error array out of bound\n");
			print_error_message();
		}
		else if (is_specified_char(c) != 0)
		{
			//printf("error char not 1 2 3 4\n");
			print_error_message();
		}
		else if (is_column_row_valid(c, 0, 8) != 0)
		{
			//printf("error: here column or row\n");
			print_error_message();
		}
		else if (is_column_row_valid(c, 8, 17) != 0)
		{
			//printf("error: here column or row\n");
			print_error_message();
		}
	}
}

int	main(int argc, char** argv)
{
	//char c[50] = {'4', '3', '2', '1', '1', '2', '2', '2', '4', '3', '2', '1', '1', '2', '2', '2'};
	int i = 0;

	while (argv[1][i] != '\0')
	{
		write(1, &argv[1][i], 1);
		i++;
	}
	write(1, "\n", 1);

	check_is_valid(argc, argv[1]);
}

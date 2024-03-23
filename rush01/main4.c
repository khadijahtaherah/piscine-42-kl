#include <stdio.h>
#include <unistd.h>

void first_row(int i, char col[4], char grid[][4]);
void last_row(int i, char col[4], char grid[][4]);

void print_grid(char grid[4][4]) {
    int i;
    int j;

	i = 0;
    while(i < 4)
	{
		j = 0;
        while (j < 4)
		{
            write(1, &grid[i][j], 1);
			j++;
        }
        write(1, "\n", 1);
		i++;
    }
    write(1, "\n", 1);
}

int main() {
    int row = 4;
    int col = 4;

    char grid[row][col];

    char colUp[4] = {'4', '3', '2', '1'};
    char colDown[4] = {'1', '2', '2', '2'};
//    char rowLeft[4] = {'4', '3', '2', '1'};
//    char rowRight[4] = {'1', '2', '2', '2'};

    int i; 

    // Initialize grid
	i = 0;
	while (i < row)
    {
		if (i == 0) // row 1
		{
			first_row(i, colUp, grid); 
		}
		else if (i == row - 1)
		{
			last_row(i, colDown, grid);
		}
		/*else
		{
			// iterate the rest
		}*/
		i++;
	}
    print_grid(grid);
    return 0;
}

void	first_row(int i, char col[4], char grid[][4])
{
	int j;

	j = 0;
	while (j < 4)
	{
		if (col[j] == '1')
		{
			grid[i][j] = '4';
		}
		else if (col[j] == '4')
		{
			grid[i][j] = '1';
		}
		else
		{
			grid[i][j] = '*';
		}
		j++;
	}
}

void	last_row(int i, char col[4], char grid[][4])
{
	int j;

	j = 0;
	while(j < 4)
	{
		if (col[j] == '1')
		{
			grid[i][j] = '4';
		}
		else if (col[j] == '4')
		{
			grid[i][j] = '1';
			grid[i][j + 1] = '2';
		}
		else
		{
			grid[i][j] = '*';
		}
		j++;
	}
}

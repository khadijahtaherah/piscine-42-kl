/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhairul <skhairul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 16:59:51 by skhairul          #+#    #+#             */
/*   Updated: 2024/03/17 11:36:10 by etien            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Function prototypes
void	ft_putchar(char c);
void	draw(int x, int y);
void	first(int col, int x);
void	middle(int col, int x);
void	last(int col, int x);

void	rush(int x, int y)
{
	if (x < 0 || y < 0)
	{
		write(1, "Only positive integers\n", 25);
	}
	else
	{
		draw(x, y);
	}
}

void	draw(int x, int y)
{
	int	col;
	int	row;

	col = 1;
	row = 1;
	while (row <= y)
	{
		if (row == 1)
		{
			first(col, x);
		}
		else if (row == y)
		{
			last(col, x);
		}
		else
		{
			middle(col, x);
		}
		col = 1;
		ft_putchar('\n');
		row ++;
	}
}

void	first(int col, int x)
{
	while (col <= x)
	{
		if (col == 1)
		{
			ft_putchar('/');
		}
		else if (col == x)
		{
			ft_putchar('\\');
		}
		else
		{
			ft_putchar('*');
		}
		col ++;
	}
}

void	middle(int col, int x)
{
	while (col <= x)
	{
		if (col == 1)
		{
			ft_putchar('*');
		}
		else if (col == x)
		{
			ft_putchar('*');
		}
		else
		{
			ft_putchar(' ');
		}
		col ++;
	}
}

void	last(int col, int x)
{
	while (col <= x)
	{
		if (col == 1)
		{
			ft_putchar('\\');
		}
		else if (col == x)
		{
			ft_putchar('/');
		}
		else
		{
			ft_putchar('*');
		}
		col ++;
	}
}

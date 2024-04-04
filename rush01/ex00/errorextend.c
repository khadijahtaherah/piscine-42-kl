/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errorextend.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhabin- <muhabin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 14:40:17 by muhabin-          #+#    #+#             */
/*   Updated: 2024/03/24 18:14:59 by skhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

int		is_corner_valid(char *c, int i);
void	print_error_message(void);
void	ft_putchar(char c);
int		is_one_exist(char *c);

/* 
* Check if input array contains '1' or not
* If none, then error
* Input must contain '1' to make up blocks 1 to 4
* Return 1 if there is error
* Return 0 if all okay 
*/
int	is_one_exist(char *c)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (c[i] != '\0')
	{
		if (c[i] == '1')
		{
			count++;
		}
		i++;
	}
	if (count == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/* 
* Check for corner pairing
* Example: if corner contains '1' and '4', contradicting block has to be placed
* Return 1 for error
* Return 0 if all okay 
*/
int	is_corner_valid(char *c, int i)
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

/* 
* Print error message
*/
void	print_error_message(void)
{
	char	*error;
	int		i;

	error = "Error! Input is not valid\n";
	i = 0;
	while (error[i] != '\0')
	{
		ft_putchar(error[i]);
		i++;
	}
}

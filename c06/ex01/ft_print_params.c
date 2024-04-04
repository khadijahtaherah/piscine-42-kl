/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhairul <skhairul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 08:13:54 by skhairul          #+#    #+#             */
/*   Updated: 2024/04/03 11:58:59 by skhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int		i;

	if (argc > 0)
	{
		i = 1;
		while (argv[i] != NULL)
		{
			ft_putstr(argv[i]);
			i++;
		}
	}
	return (0);
}

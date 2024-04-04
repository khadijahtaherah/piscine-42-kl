/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhairul <skhairul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 08:45:29 by skhairul          #+#    #+#             */
/*   Updated: 2024/04/03 12:27:02 by skhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_sort_strings(int count, char **str)
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	while (i < count)
	{
		j = i;
		while (j > 0 && ft_strcmp(str[j - 1], str[j]) > 0)
		{
			temp = str[j - 1];
			str[j - 1] = str[j];
			str[j] = temp;
			j--;
		}
		i++;
	}
}

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

int	main(int argc, char	**argv)
{
	int		i;
	int		compare;

	if (argc > 0)
	{
		i = 1;
		compare = 0;
		while (argv[i])
		{
			ft_sort_strings(argc - 1, argv + 1);
			ft_putstr(argv[i]);
			i++;
		}
	}
	return (0);
}

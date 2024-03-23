/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhairul <skhairul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 08:29:07 by skhairul          #+#    #+#             */
/*   Updated: 2024/03/23 08:30:47 by skhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	split_string(char *str, char *c);

void	split_string(char *str, char *c)
{
	int	i;
	int	j;

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

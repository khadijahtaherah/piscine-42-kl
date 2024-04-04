/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanauman <hanauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 12:32:00 by hanauman          #+#    #+#             */
/*   Updated: 2024/03/27 10:50:48 by hanauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Allowed functions : None
•Create a function that returns 1 if the string given as a parameter contains
only alphabetical characters, and 0 if it contains any other character.
•Here’s how it should be prototyped :
int ft_str_is_alpha( char *str);
•It should return 1 if str is empty.
8

*/

int	ft_str_is_alpha(char *str)
{
	if (!*str)
		return (1);
	while (*str)
	{
		if ((*str < 'A' || *str > 'Z') && (*str < 'a' || *str > 'z'))
			return (0);
		str++;
	}
	return (1);
}

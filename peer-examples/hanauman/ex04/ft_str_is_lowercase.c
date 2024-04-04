/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanauman <hanauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 14:53:42 by hanauman          #+#    #+#             */
/*   Updated: 2024/03/25 14:54:08 by hanauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Allowed functions : None
•Create a function that returns 1 if the string given as a parameter contains
only lowercase alphabetical characters, and 0 if it contains any other
character.
•Here’s how it should be prototyped :
int	ft_str_is_lowercase( char *str);
•It should return 1 if str is empty.
10
*/

int	ft_str_is_lowercase(char *str)
{
	if (!*str)
		return (1);
	while (*str)
	{
		if (!(*str >= 'a' && *str <= 'z'))
			return (0);
		str++;
	}
	return (1);
}

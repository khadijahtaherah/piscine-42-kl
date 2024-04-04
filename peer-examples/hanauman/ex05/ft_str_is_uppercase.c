/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanauman <hanauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 14:53:37 by hanauman          #+#    #+#             */
/*   Updated: 2024/03/25 14:53:54 by hanauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Allowed functions : None
•Create a function that returns 1 if the string given as a parameter contains
only uppercase alphabetical characters, and 0 if it contains any other
character.
•Here’s how it should be prototyped :
int ft_str_is_uppercase( char *str);
•It should return 1 if stris empty.
11
*/

int	ft_str_is_uppercase(char *str)
{
	if (!*str)
		return (1);
	while (*str)
	{
		if (!(*str >= 'A' && *str <= 'Z'))
			return (0);
		str++;
	}
	return (1);
}

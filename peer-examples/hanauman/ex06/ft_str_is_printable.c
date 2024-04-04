/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanauman <hanauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 14:53:19 by hanauman          #+#    #+#             */
/*   Updated: 2024/03/25 14:54:43 by hanauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Allowed functions : None
•Create a function that returns 1 if the string given as a parameter contains
only printable characters, and 0 if it contains any other character.
•Here’s how it should be prototyped :
int	ft_str_is_printable( char *str);
•It should return 1 if stris empty.
12
*/

int	ft_str_is_printable(char *str)
{
	if (!*str)
		return (1);
	while (*str)
	{
		if (*str < ' ' || *str > 126)
			return (0);
		str++;
	}
	return (1);
}

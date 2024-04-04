/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanauman <hanauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 14:56:14 by hanauman          #+#    #+#             */
/*   Updated: 2024/03/25 17:48:08 by hanauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Allowed functions : None
•Create a function that transforms every letter to uppercase.
•Here’s how it should be prototyped :
char	*ft_strupcase( char *str);
•It should return str.
13
*/

// 'a' - 'A' == 32
char	*ft_strupcase(char *str)
{
	char		*s;
	const int	dist = 'a' - 'A';

	s = str;
	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= dist;
		s++;
	}
	return (str);
}

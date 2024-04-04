/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanauman <hanauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 21:12:50 by hanauman          #+#    #+#             */
/*   Updated: 2024/03/26 19:07:44 by hanauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Allowed functions : None
•Reproduce the behavior of the function strcpy(man strcpy).
•Here’s how it should be prototyped :
char	*ft_strcpy( char *dest, char *src);

DESCRIPTION
     The strcpy() function copies the string src to dst
     (including the terminating `\0' character.)

     The source and destination strings should not overlap, as the
     behavior is undefined.

RETURN VALUES
     The strcpy() function returns dst.
*/

char	*ft_strcpy(char *dest, char *src)
{
	char	*d;

	d = dest;
	while (*src)
		*d++ = *src++;
	*d = '\0';
	return (dest);
}

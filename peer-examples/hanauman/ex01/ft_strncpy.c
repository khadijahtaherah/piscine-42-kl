/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanauman <hanauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 09:59:17 by hanauman          #+#    #+#             */
/*   Updated: 2024/03/26 17:26:46 by hanauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Allowed functions : None
•Reproduce the behavior of the function strncpy (man strncpy).
•Here’s how it should be prototyped :
char	*ft_strncpy( char *dest, char *src, unsigned int n);

DESCRIPTION
     The strncpy() function copy at most len characters
     from src into dst.  If src is less than len characters long, the
     remainder of dst is filled with `\0' characters.  Otherwise, dst is
     not terminated.

     The source and destination strings should not overlap, as the
     behavior is undefined.

RETURN VALUES
     The strncpy() function return dst.
*/

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && *src)
		dest[i++] = *src++;
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanauman <hanauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 16:41:33 by hanauman          #+#    #+#             */
/*   Updated: 2024/03/27 14:34:23 by hanauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Chapter XIII
Exercise 10 : ft_strlcpy
Exercise 10
ft_strlcpy
Turn-in directory : ex10/
Files to turn in : ft_strlcpy.c
Allowed functions : None
•Reproduce the behavior of the function strlcpy (man strlcpy).
•Here’s how it should be prototyped :
unsigned int	ft_strlcpy( char *dest, char *src, unsigned int size);
16

NAME
	strlcpy, strlcat -- size-bounded string copying and concatenation
SYNOPSIS
	#include <string.h>

	size_t
	strlcpy(char * restrict dst, const char * restrict src, size_t dstsize);
DESCRIPTION
	strlcpy() takes the full size of the destination buffer and guarantee
	NUL-termination if there is room.  Note that room for the NUL
	should be included in dstsize.

	strlcpy() copies up to dstsize - 1 characters from the string src to dst,
	NUL-terminating the result if dstsize is not 0.

	If the src and dst strings overlap, the behavior is undefined.

	strlcpy() function returns the total length of the string it tried to
	create. (i.e. strlen(src))

	If the return value is >= dstsize, the output string has been truncated.
	It is the caller's responsibility to handle this.
*/

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size)
	{
		while (i < size - 1 && *src)
			dest[i++] = *src++;
		dest[i] = '\0';
	}
	while (*src++)
		i++;
	return (i);
}

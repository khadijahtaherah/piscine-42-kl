/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhairul <skhairul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 08:42:02 by skhairul          #+#    #+#             */
/*   Updated: 2024/04/01 14:54:15 by skhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (i < size && src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	src_len;
	unsigned int	dest_len;

	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	if (size <= dest_len)
		return (size + src_len);
	if (dest_len < size)
		ft_strncat(dest, src, size);
	return (src_len + dest_len);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    char *src = "good";
    char dest[20] = "hello world";

    size_t result = strlcat(dest, src, 6);

    printf("Resulted string: %s\n", dest);
    printf("Resulted string length: %ld\n", result);
}*/

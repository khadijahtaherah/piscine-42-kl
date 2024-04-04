/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhairul <skhairul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 18:04:09 by skhairul          #+#    #+#             */
/*   Updated: 2024/04/04 21:05:31 by skhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	total_length(int size, char **strs, char *sep)
{
	int	total_strs;
	int	i;
	int	total_sep;

	i = 0;
	total_strs = 0;
	total_sep = 0;
	while (i < size)
	{
		total_strs += ft_strlen(strs[i]);
		i++;
	}
	i = 0;
	while (i < size - 1)
	{
		total_sep += ft_strlen(sep);
		i++;
	}
	return (total_strs + total_sep);
}

void	ft_strjoin_strs(int i, int *k, char *result, char **strs)
{
	int	j;

	j = 0;
	while (strs[i][j])
	{
		result[*k] = strs[i][j];
		(*k)++;
		j++;
	}
}
/*
void	ft_strjoin_sep(int i, int size, int *k, char *result, char *sep)
{
	int	j;

	j = 0;
	while (sep[j] && i != size - 1)
	{
		result[*k] = sep[j];
		(*k)++;
		j++;
	}
}
*/

char	*allocate_memory(int size, char *result, char *sep, char **strs)
{
	int	len;

	if (size == 0)
	{
		result = malloc(sizeof(char));
		return (result);
	}
	len = total_length(size, strs, sep);
	result = malloc(len * size);
	if (result == NULL)
		return (NULL);
	return (result);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		i;
	int		j;
	int		k;

	result = NULL;
	result = allocate_memory(size, result, sep, strs);
	i = 0;
	k = 0;
	while (i < size)
	{
		ft_strjoin_strs(i, &k, result, strs);
		j = 0;
		while (sep[j] && i != size - 1)
		{
			result[k] = sep[j];
			k++;
			j++;
		}
		i++;
	}
	result[k] = '\0';
	return (result);
}
/*
#include <stdio.h>
int main() {
    char *strs[] = {"Hello", "world", "from", "meee"};
    char *sep = " ";
    char *result = ft_strjoin(4, strs, sep);
    if (result != NULL) {
        printf("Joined string: %s\n", result);
        free(result); // Freeing the dynamically allocated memory
    } else {
        printf("Memory allocation failed.\n");
    }
    return 0;
}*/

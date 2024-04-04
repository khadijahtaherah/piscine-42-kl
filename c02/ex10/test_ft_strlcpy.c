/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhairul <skhairul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 12:47:05 by skhairul          #+#    #+#             */
/*   Updated: 2024/03/28 12:53:15 by skhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char src[] = "Hello, World!";
    char dest[10];

	size_t copied = ft_strlcpy(dest, src, sizeof(dest));
	//size_t copied = strlcpy(dest, src, sizeof(dest));
	printf("Copied len: %zu\n", copied);
	printf("strlen src: %lu\n", strlen(src));
    if (copied >= sizeof(dest)) {
        printf("String was truncated!\n");
		printf("Copied string: %s\n", dest);
    } else {
        printf("Copied string: %s\n", dest);
    }
	printf("dest size: %lu\n", sizeof(dest));

    return 0;
}

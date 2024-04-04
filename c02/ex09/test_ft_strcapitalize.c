/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strcapitalize.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhairul <skhairul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 10:17:44 by skhairul          #+#    #+#             */
/*   Updated: 2024/03/27 10:27:50 by skhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char input[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char *str;

	str = input;
	str = ft_strcapitalize(str);

	printf("%s\n", str);

	return (0);
}

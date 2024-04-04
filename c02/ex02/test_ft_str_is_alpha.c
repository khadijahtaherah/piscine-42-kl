/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_str_is_alpha.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhairul <skhairul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 09:16:16 by skhairul          #+#    #+#             */
/*   Updated: 2024/03/26 10:42:19 by skhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_alpha(char *str);

int	main(void)
{
	char	*str;

	str = "";
	if ((ft_str_is_alpha(str) == 0))
	{
		printf("String contains other character than alphabet\n");
		printf("String: %s\n", str);
	}
	else
	{
		printf("String contains only alphabet\n");
		printf("String: %s\n", str);
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanauman <hanauman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 15:42:07 by hanauman          #+#    #+#             */
/*   Updated: 2024/03/27 11:49:19 by hanauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Allowed functions : None
•Create a function that capitalizes the ﬁrst letter of each word and transforms
all other letters to lowercase.
•A word is a string of alphanumeric characters.
•Here’s how it should be prototyped :
char	*ft_strcapitalize( char *str);
•It should return str.
•For example:
salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un
•Becomes:
Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un
15
*/

char	*ft_strcapitalize(char *str)
{
	char	*s;
	int		delim;

	s = str;
	delim = 1;
	while (*s)
	{
		if (*s < '0')
			delim = 1;
		else if (delim && *s >= 'a' && *s <= 'z')
		{
			*s -= 32;
			delim = 0;
		}
		else if (!delim && *s >= 'A' && *s <= 'Z')
			*s += 32;
		else
			delim = 0;
		s++;
	}
	return (str);
}

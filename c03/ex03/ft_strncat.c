char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while ( j < (int)nb && src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char src[50], dest[50];

   	strcpy(src,  "Father 123");
   	strcpy(dest, "I am your ");

   	ft_strncat(dest, src, 20);

	printf("result: %s\n", dest);
	return 0;
}
*/

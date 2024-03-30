char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
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

   	strcpy(src,  "This is source");
   	strcpy(dest, "This is destination");

   	ft_strcat(dest, src);

	printf("result: %s\n", dest);
	return (0);
}
*/
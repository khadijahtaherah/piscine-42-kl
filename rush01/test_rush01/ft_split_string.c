#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/* Function prototype */
void split_string(char *str, char *c);

void split_string(char *str, char *c)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			c[j] = str[i];
			j++;
		}	
		i++;
	}
	c[j] = '\0';
}
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/* Function prototype */
void split_string(char *str, char *chars);
void split_array(int index, int limit, char *str, char* chars);

void split_string(char *str, char *chars)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			chars[j] = str[i];
			j++;
		}	
		i++;
	}
	chars[j] = '\0';
}

void split_array(int index, int limit, char *str, char* chars)
{
	int i;

	i = 0;
	while (i < limit)
	{
		chars[i] = str[index];
		i++;
		index++;
	}
	chars[i] = '\0';
}
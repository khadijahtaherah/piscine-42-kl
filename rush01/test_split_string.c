#include <stdio.h>
#include <unistd.h>

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


int main(int argc, char** argv)
{
	int i;
	char chars[17];
	split_string(argv[1], chars);

	i = 0;
	while (chars[i] != '\0')
	{
		write(1, &chars[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}

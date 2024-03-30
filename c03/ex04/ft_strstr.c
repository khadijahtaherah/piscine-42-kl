char    *ft_strstr(char *str, char *to_find)
{
    int     i;
    int     j;
    char    *result = {0};

    (void) to_find;
    i = 0;
    j = 0;
    while (str[i])
    {
        j++;
        i++;
    }
    return (result);
}

#include <stdio.h>
#include <string.h>

int main(void)
{
    char *str = "I am your mother";
    char *to_find = "mother";
    char *result;

    result = ft_strstr(str, to_find);
    printf("Resulted string: %s\n", result);
}
char    *ft_strstr(char *str, char *to_find)
{
    int i = 0;
    int j = 0;

    if (!(to_find[j]))
        return (str);
    while (str[i])
    {
        if (str[i] == to_find[j])
        {
            int temp_i = i;
            while (str[temp_i] == to_find[j] && to_find[j])
            {
                temp_i++;
                j++;
            }
            if (to_find[j] == '\0')
                return &str[i];
            j = 0;
        }
        i++;
    }
    return (0);
}

#include <stdio.h>
#include <string.h>

int main(void)
{
    char *str = "I am your fath";
    char *to_find = "father";
    char *result;
    char *result2;
    
    result = ft_strstr(str, to_find);
    result2 = strstr(str, to_find);
    printf("Using ft_strstr:\nResulted string: %s\n", result);
    printf("Using strstr:\nResulted string: %s\n", result2);
}
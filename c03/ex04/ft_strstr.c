char    *ft_strstr(char *str, char *to_find)
{
    int i = 0;
    int j = 0;

    while (str[i])
    {
        if (str[i] == to_find[j])
        {
            // If the characters match, check if the whole substring matches
            int temp_i = i;
            while (str[temp_i] == to_find[j] && to_find[j])
            {
                temp_i++;
                j++;
            }
            // If the whole substring matches, return the start of the substring
            if (to_find[j] == '\0')
                return &str[i];
            // Reset j if the whole substring didn't match
            j = 0;
        }
        i++;
    }
    // Return NULL if the substring is not found
    return (0);
}

#include <stdio.h>
#include <string.h>

int main(void)
{
    char *str = "I am your mother 123";
    char *to_find = "mother";
    char *result;

    result = ft_strstr(str, to_find);
    printf("Resulted string: %s\n", result);
}
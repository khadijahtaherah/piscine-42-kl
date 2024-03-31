int     ft_strlen(char *str)
{
    int     i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

unsigned int    ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int    i;
    unsigned int    j;
    int     src_len;

    i = 0;
    j = ft_strlen(dest);
    src_len = ft_strlen(src);
    
    return (src_len);
}

#include <stdio.h>
#include <string.h>

int main(void)
{
    char *src = "I am your fath";
    char dest[20] = "father";

    size_t result = ft_strlcat(dest, src, 20);

    printf("Resulted string: %s\n", dest);
    printf("Resulted string lentgh: %ld\n", result);
}
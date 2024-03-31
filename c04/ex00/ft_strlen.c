int     ft_strlen(char *str)
{
    int     i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}
/*
#include <stdio.h>
int main(int argc, char** argv)
{
    (void)argc;
    printf("str: %s, len: %d\n", argv[1], ft_strlen(argv[1]));
    return (0);
}
*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/* Function prototype */
void ft_putchar(char c);

void  ft_putchar(char c)
{
  write(1, &c, 1);
}
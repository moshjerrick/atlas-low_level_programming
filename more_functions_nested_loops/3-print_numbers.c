#include "main.h"
#include <stdio.h>

/**
 * main - numbers 0 - 9
 *
 * Return: alwasy (0)
 */
void print_numbers(void)
{
int i;

for (i = 48; i < 58; i++)
{
putchar(i);
}
putchar('\n');
}

#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - here to print numbers mostly
 *
 * Return: alwasys (0)
 */
void print_most_numbers(void)
{
int i;

for (i = 48; i < 58; i++)
if (i != 50 && i != 52)
{
putchar(i);
}
putchar('\n');
}

#include "main.h"
/**
 * print_line - Printing a line in terminal
 *
 * @n: number of _ printed
 * Return: always (0)
 */
void print_line(int n)
{
int i;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
}

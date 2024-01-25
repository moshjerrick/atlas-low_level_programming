#include "main.h"
/**
 * print_square - print a square
 *
 * @size: the size of square
 * Return: always 0
 */
void print_square(int size)
{
int i;
int j;

for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
_putchar('#');
}
_putchar('\n');
}
if (i <= 0)
_putchar('\n');
}

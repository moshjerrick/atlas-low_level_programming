#include <stdio.h>
/**
 * main - all numbers
 *
 * Return: always 0
 */
int main(void)
{
int i;
for (i = 48; i <= 57; i++)
{
putchar(i);

if(i != 9)
putchar(',');

putchar(' ');
}
putchar('\n');
return (0);
}

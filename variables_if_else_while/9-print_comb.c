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

if(i != 57)
putchar(',');

 putchar(' ');
}
putchar('\n'); /* maybe we dont need this */
return (0);
}

#include <stdio.h>

/**
 * main - printing alphabet
 *
 * Return: always 0
 */
int main(void)
{
int start = 'a';
int end = 'z';

int i;
for (i = start; i <= end; ++i)
{
if(i != 'e' && i != 'q')
putchar(i);
}


putchar('\n');

return (0);
}


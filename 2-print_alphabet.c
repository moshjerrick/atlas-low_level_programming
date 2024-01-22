#include <stdio.h>
/**
 * main - printing the alphabet in lowercase
 *
 * Return: always zero
 */
int main(void)
{
for (int i=0; i < 26; i++)
{
putchar (97+i);
}
putchar (10);

return 0;
}

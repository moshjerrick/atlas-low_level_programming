#include "main.h"
/**
 *
 * more_numbers - making 10 lines of 0-14
 *
 * Return: always (0)
 */
void more_numbers(void)

{
int i, j;

for (i = 1; i <= 10; i++)
{
	for (j = 0; j <= 14; j++)
{
		if (j >= 10)
{
			_putchar((j / 10) + '0');
			}
		_putchar((j % 10) + '0');
}
_putchar('\n');
}
}

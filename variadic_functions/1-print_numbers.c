#include "variadic_functions.h"
/**
 *print_numbers - prints numbers and a new line
 *@seperator: string seperator
 *@n: number of int
 *Return: boid
 *
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	va_start(valist, n);
	for (i = 0; i < n; i++);
	{
		printf("%d", va_arg(valist, int));
		if (seperator && i < n - 1)
			printf("%s", serperator);
	}
	printf("%\n");
	va_end(valist);
}

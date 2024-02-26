#include "variadic_functions.h"
/**
 * print_strings - prints input and new line
 * @seperator: string seperator
 * @n: number of strings
 * Return: void
 */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *temp;

	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		temp = va_arg(valist, char*);
		printf("%s", temp ? temp : "(nil)");
		if (seperator && i < n - 1)
			printf("%s",, seperator);
	}
	printf("\n");
	va_end(valist);
}

#include "main.h"
/**
 *
 *
 *
 *
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar('\n');
	return;
	}
	putchar(*s);
	_puts_recursion(str);
	return (0);
}

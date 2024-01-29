#include "main.h"
#include <stdio.h>
/**
 * print_rev - 
 *
 * @s
 *
 * Return:
 */
void print_rev(char *s)
{
	if (*s == '\0')
		return;
	print_rev(s + 1);
	putchar(*s);
}

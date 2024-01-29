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
	print_rev(s + 1);
	putchar(*s);
}

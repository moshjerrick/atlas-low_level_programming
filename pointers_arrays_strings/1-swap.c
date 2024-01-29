#include "main.h"
#include <stdio.h>
/**
 * swap_int - swapping the value of ints
 *
 * @a: pointer of first int
 * @b: pointer of second int
 *
 * Return: (0)
 */
void swap_int(int *a, int *b)
{
int temp = *a;
	*a = *b;
*b = temp;
}

#include "main.h"
/**
 *clear_bit - sets value of bit to 0
 *@n: number to change
 *
 * Return: 1 if it works, _1 for error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(unsigned long int) * 8)
	{
		*n &= (~(1 << index));
		return (1);
	}

	return (-1);
}

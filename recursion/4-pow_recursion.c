#include "main.h"
/**
 *_pow_recursion - raising value to a new power
 *
 *@x: int
 *@y: int
 *Return: 1 if positive 0 if negative
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}

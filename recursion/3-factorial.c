#include "main.h"
/**
 *factorial - retrieving factorial of a given number
 *
 *@n: interger
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
}
}

#include "main.h"
/**
 *factorial - retrieving factorial of a given number
 *
 *@n: interger
 *Return: factorial of given number
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

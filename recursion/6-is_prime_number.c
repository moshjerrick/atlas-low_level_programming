#include "main.h"
/**
 *is_prime_number: determining prime numbers
 *
 *@n: int
 *
 *Return: 1 if prime 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 0)
	{
		return (0);
	}
	if (divisor == 1)
	{
		return (1);
	}
	if (n / divisor == 0)
	{
		return (0);
	}
	return is_prime_number(n, divisor - 1);
}

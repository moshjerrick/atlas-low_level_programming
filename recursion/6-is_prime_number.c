#include "main.h"
#include <math.h>
/**
 *is_prime_number: determine if a number is prime
 *
 *@n: int
 *
 *Return: 1 = prime 0 = no
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n <= 3)
		return (1);

	if (n % 2 == 0 || n % 3 == 0)
		return (0);

	return (1);
}

#include "main.h"
#include <math.h>
/**
 *is_prime_number: determining prime numbers
 *
 *@n: int
 *
 *Return: 1 if prime 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1) return (0);
	if (n <= 3) return (1);

	if (n % 2 == 0 || n % 3 == 0) return (0);

	return (1);
}

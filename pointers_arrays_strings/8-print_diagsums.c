#include "main.h"
#include <stdio.h>
/**
 *
 *
 *
 *
 *
 *
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0, sum2 = 0;

	for (i =0; i < size; i++)
	{
		sum1 += *(a + i * size + i);
		sum2 += *(a + i * size + (size -1 -i));
	}
	printf("sum of fist diagnal: %d/n", sum1);
	printf("sum of second diagonal: %d/n", sum2);
}

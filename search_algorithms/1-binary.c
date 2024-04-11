#include "search_algos.h"

/**
 *
 *
 *
 *
 */
void print_search_array(int *array, int start, int end)
{
	int i;

	i = start;
	printf("Searching in array: ");
	while (i <= end)
	{
		if (i > start)
			printf(", ");
		printf("%d", array[i]);
		i++;
	}
	printf("\n");
}

int binary_search(int *array, size_t size, int value)
{
	int left, right, compare;

	left = compare = 0;
	right = size - 1;

	while (left <= right)
	{
		print_search_array(array, left, right);
		compare = (left + right) / 2;
		if (array[compare] == value)
			return (compare);
		else if (array[compare] > value)
		{
			right = compare;
		}
		else if (array[compare] < value)
		{
			left = compare + 1;
		}
	}
	return (-1);
}
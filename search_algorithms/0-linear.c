#include <stddef.h>
#include "search_algos.h"
#include <stdio.h>
/**
 * linear_search - search linearly through array
 * @array: array to search
 * @size: size of array
 * @vaulue: value to be searched
 * Return: first time a value is found
 *
 */


int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	if (array == NULL)
		return (-1);

	while (i < (int)size)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
			return (i);
		}
		else
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
		i++;
	}
	return (-1);
}

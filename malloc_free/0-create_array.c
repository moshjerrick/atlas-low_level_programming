#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *
 *
 *
 *
 *
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	char *array = malloc(size);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}

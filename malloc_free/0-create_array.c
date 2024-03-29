#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *create_array - creates an array of chars
 *
 *@size: unsigned int
 *@c: int
 *Return: pointer of NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(size);
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

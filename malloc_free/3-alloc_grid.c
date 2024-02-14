#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 **alloc_grid - returns pointer to array of int
 *
 *@width: width of 2d array
 *@height: height of 2d array
 *
 *Return: pointer to 2d array or null
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int i;
	int j;

	if (width < 1 || height < 1)
		return (NULL);
	array = malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			for (--i; i >= 0; i--)
				free(array[i]);
			free(array);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			array[i][j] = 0;
	return (array);
}

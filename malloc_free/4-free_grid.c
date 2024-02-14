#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *free_grid - frees a 2d grid 
 *
 *@grid: input pointer
 *@height: height of array
 *
 *Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}

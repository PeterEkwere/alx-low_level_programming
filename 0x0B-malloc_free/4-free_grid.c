#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - is a function that free the allocated memory
 * @grid: is the allocated memory to be freed
 * @height: is the height of the grid
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		if(grid[i] != NULL)
		{
			free(grid[i]);
			grid[i] = NULL;
		}
	}
	free(grid);
	grid = NULL;
}

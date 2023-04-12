#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - a function that returns a pointer to a 2d array
 * @width: is the width of the array
 * @height: is the height of the array
 * Return: a pointer to the array
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j, k, l;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}

	arr = malloc(height * sizeof(int *));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			for (l = 0; l < i; l++)
			{
				free(arr[i]);
			} free(arr);
			return (NULL);
		}
	}

	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
		{
			arr[j][k] = 0;
		}
	} return (arr);
}

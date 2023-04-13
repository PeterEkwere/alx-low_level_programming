#include "main.h"
#include <stdlib.h>
/**
 * array_range - is a function that initailezes aan array from min to max
 * @min: is the minimum number
 * @max: is the maximum number
 * Return: a pointer to an array
 */
int *array_range(int min, int max)
{
	int *p;
	int i;

	p = malloc(sizeof(int) * (max - min));

	if (p == NULL)
	{
		return (NULL);
	}
	if (min > max)
	{
		return (NULL);
	}
	for (i = min; i < max; i++)
	{
		p[i] = min;
		min++;
	}
	return (p);
}

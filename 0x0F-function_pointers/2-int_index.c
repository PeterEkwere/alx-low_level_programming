#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - is a function that searches for an integer in an array
 * @array: is a pointer to an array of integers
 * @size: is the size of the array
 * @cmp: is a pointer to a function that compares integers
 * Return: an integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;
	int notFound = 0;

	if (size <= 0)
	{
		return (-1);
	}
	if (array == NULL || cmp == NULL)
	{
		exit(0);
	}

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) == 1)
		{
			return (index);
		}
		else if (cmp(array[index] == 0))
		{
			notFound++;
		}
	}
	if (notFound >= 1)
	{
		return (-1);
	} return (-1);
}

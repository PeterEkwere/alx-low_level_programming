#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - is a function that iterates an array using another function
 * @array: is an array of integers
 * @size: is the size of an integer
 * @action: is a pointer to a function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && size >= 0 && action != NULL)
	{
		size_t i;

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
	else
	{
		exit(0);
	}
}

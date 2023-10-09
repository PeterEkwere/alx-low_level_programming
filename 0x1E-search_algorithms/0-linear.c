#include "search_algos.h"
/**
 * linear_search - This function searches for a value in an array of integers
 * @array: This is the array to be searched
 * @size: This is the number of elements in the array
 * @value: This is the value to search for
 * Return: -1 if failed or first index of value
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%li] = [%i]\n", i, array[i]);
		if (value == array[i])
		{
			return (i);
		}
	}
	return (-1);

}

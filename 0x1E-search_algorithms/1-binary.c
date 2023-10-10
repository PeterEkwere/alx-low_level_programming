#include "search_algos.h"
/**
 * binary_search - This function searches for a value in an array of integers
 * @array: This is the array to be searched
 * @size: This is the number of elements in the array
 * @value: This is the value to search for
 * Return: -1 if failed or index of value
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t half;
	size_t temp_left;
	size_t temp_right;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		temp_left = left;
		temp_right = right;
		half = left + (right - left) / 2;
		printf("Searching in array: ");
		while (temp_left <= temp_right)
		{
			printf("%i", array[temp_left]);
			if (temp_left < temp_right)
				printf(", ");
			temp_left++;
		}
		printf("\n");

		if (value == array[half])
		{
			return (half);
		}
		else if (value > array[half])
		{
			left = half + 1;
		}
		else
		{
			right = half - 1;
		}
	}
	return (-1);

}

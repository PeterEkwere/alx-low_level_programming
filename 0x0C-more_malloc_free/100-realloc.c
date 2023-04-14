#include <stdlib.h>
#include "main.h"
/**
 * _realloc - is a function that can increase or decrease,
 * a previously allocated size
 * @ptr: is a pointer to the previous allocated memory
 * @old_size: is the old size
 * @new_size: is the new size to be reallocated
 * Return: a pointer to the newly allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *nptr = malloc(new_size);
	int range, index;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		return (nptr);
	}
	if (nptr == NULL)
	{
		return (NULL);
	}
	if (new_size == old_size)
	{
		free(nptr);
		return (ptr);
	}
	else if (new_size > old_size)
	{
		range = new_size - old_size;
	}
	else if (new_size < old_size)
	{
		range = new_size;
	}
	for (index = 0; index < range; index++)
	{
		*((char *)nptr + index) = *((char *)ptr + index);
	} free(ptr);
	return (nptr);
}

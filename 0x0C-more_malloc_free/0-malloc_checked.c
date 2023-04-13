#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - this function allocates memory using malloc
 * @b: is an integer that determines the size of memory
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	int *p = malloc(sizeof(unsigned int) * b);

	if (p == NULL)
	{
		exit(98);
	} return (p);
}

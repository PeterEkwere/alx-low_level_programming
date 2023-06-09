#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - this function allocates memory using malloc
 * @b: is an integer that determines the size of memory
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *p;
	unsigned int max = ~0;

	if (b <= 0 || b > max / sizeof(unsigned int))
	{
		exit(98);
	}

	p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	} return (p);
}

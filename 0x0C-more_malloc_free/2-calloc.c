#include <stdlib.h>
#include "main.h"
/**
 * _calloc - this function allocates memory using malloc
 * @nmemb: is an integer that will be initialezed in  memory
 * @size: is an integer that determines the size
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int i;
	unsigned int max = ~0;

	if (size <= 0 || size > max / sizeof(unsigned int) || nmemb <= 0)
	{
		return (NULL);
	}

	p = malloc(size * nmemb);

	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
	{
		((char *)p)[i] = 0;
	} return (p);
}

#include "main.h"
#include <stdio.h>
/**
 * _strncpy - is a function that append and array with another array
 * @src: is a pointer to an array
 * @n:is also an integer
 * @dest:is a pointer to another array
 * Return: it will return an the pointer to the destination array
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; *(dest + i) != '\0' && i < n ; i++)
	{
		*(dest + i) = *(src + i);
	} return dest;
}

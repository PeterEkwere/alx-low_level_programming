#include "main.h"
#include <stdio.h>
/**
 * _strncat - is a function that append and array with another array
 * @src: is a pointer to an array
 * @dest:is a pointer to an array
 * @n:is also an integer
 * Return: it will return an the pointer to the destination array
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	while ((j < n) && (*(src + j) != '\0'))
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	} return (dest);
}



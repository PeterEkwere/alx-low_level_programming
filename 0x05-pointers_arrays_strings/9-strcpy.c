#include "main.h"
/**
 * _strcpy - copys data item from one array to another array
 * @dest: is a pointer pointing to an array
 * @src: is a pointer pointing to an array
 * Return: it returns the destintation pointer
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	char *p = dest;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		*(dest + i) = *(src + i);
	}
	*(dest + i) = '\0';
	return (p);
}

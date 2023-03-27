#include "main.h"
/**
 * _strlen - this function returns the length of an array
 *
 * @*s: is a pointer to an integer
 *
 * Return: _strlen
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	} return (i);
}

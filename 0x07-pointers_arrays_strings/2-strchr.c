#include "main.h"
/**
 * _strchr - used to fill a block of memory with a specific byte value
 * @s: is a pointer to a string to be searched
 * @c:The character to be searched for in the string
 * Return: return  a char pointer
 */
char *_strchr(char *s, char c)
{
	size_t i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
	} return (NULL);
}

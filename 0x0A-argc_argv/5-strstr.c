#include "main.h"
/**
 * _strstr - used to calculate the length of the initial substring of a string
 * @haystack: is a pointer to a string to be searched
 * @needle:is a set of characters we want to search for
 * Return: return  a char pointer
 */
char *_strstr(char *haystack, char *needle)
{
	size_t i;
	size_t j;

	if (*needle == '\0')
	{
		return (haystack);
	}

	for (i = 0; *(haystack + i) != '\0'; i++)
	{
		for (j = 0; *(needle + j) != '\0' && haystack[i + j] == needle[j]; j++)
		{
			if (*(haystack + i) == *(needle + 0))
			{
				return (haystack + i);
			}
		}
	} return (NULL);
}

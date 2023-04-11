#include "main.h"
#include <stdlib.h>
/**
 * _strdup - is a function that creates memory for an array
 * @str: is the array of char to be copied
 * Return: a pointer to the array or null
 */
char *_strdup(char *str)
{
	if (str == NULL)
        {
                return (NULL);
        }

	int i = 0;
	int j;
	char *a;

	while (str[i] != '\0')
	{
		i++;
	}

	a = malloc(sizeof(char) * (i + 1));

	if (a == NULL)
	{
		return (NULL);
	}

	for (j = 0; str[j] != '\0'; j++)
	{
		a[j] = str[j];
	} a[j] =  '\0';
	return (a);
}

#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates 2 strings
 * @s1:  a pointer to the first string
 * @s2: a pointer to the second string
 * @n: is an integer
 * Return: returns a pointer to a memory containing s1
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i = 0, j = 0, k, q;

	if (s1 == NULL)
	{
		s1 = '\0';
	}
	else if (s2 == NULL)
	{
		s2 = '\0';
	}
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	if (n >= j)
	{
		p = malloc(sizeof(char) * (i + n + 1));
	}
	else
	{
		p = malloc(sizeof(char) * (i + j + 1));
	}
	if (p == NULL)
		return (NULL);
	for (q = 0; s1[q] != '\0'; q++)
	{
		p[q] = s1[q];
	}
	for (k = 0; k < n && s2[k] != '\0'; ++k)
	{
		p[i + k] = s2[k];
	}
	p[i + k] = '\0';
	return (p);
}

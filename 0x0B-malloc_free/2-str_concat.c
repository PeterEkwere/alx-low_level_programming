#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - Concatenates two strings.
 * @s1: The first string to be concatenated.
 * @s2: The second string to be concatenated.
 * Return: A pointer to the concatenated string,
 * or NULL if memory allocation fails.
 */
char *str_concat(char *s1, char *s2)
{

	int i = 0;
	int j = 0;
	int h = 0;
	int k = 0;
	char *a;

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

	a = malloc(sizeof(char) * (i + j + 1));

	if (a == NULL)
	{
		return (NULL);
	}
	for (k = 0; s1[k] != '\0'; k++)
	{
		a[k] = s1[k];
	}
	for (h = 0; s2[h] != '\0'; h++)
	{
		a[k + h] = s2[h];
	} a[k + h] = '\0';
	return (a);
}

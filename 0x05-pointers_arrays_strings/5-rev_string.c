#include "main.h"
/**
 * _strlen - this function returns the length of an array
 *
 * @c: is a pointer to an integer
 *
 * Return: _strlen
 */
int _strlen(char *c)
{
	int i = 0;

	while (*c != '\0')
	{
		c++;
		i++;
	} return (i);
}
/**
 * print_rev - prints string in reverse
 *
 * @s: is a pointer to an integer
 *
 * Return: void
 */
void rev_string(char *s)
{
	int len = _strlen(s);
	int i;

	for (i = len; i >= 0; i--)
	{
		s[i] = i;	
	}
}

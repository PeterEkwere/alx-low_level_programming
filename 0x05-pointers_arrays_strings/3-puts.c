#include "main.h"
/**
 * _strlen - prints a string to the output
 *
 * @s: is an array of char
 *
 * Return: int
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
/**
 * _puts - prints a string to the output
 *
 * @str: is an array of char
 *
 * Return: void
 */
void _puts(char *str)
{
	int i;
	int len = _strlen(str);

	for (i = 0; i < len; i++)
	{
		_putchar(str[i]);
	} _putchar('\n');
}

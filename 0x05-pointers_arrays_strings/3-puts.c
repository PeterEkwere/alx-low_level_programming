#include "main.h"
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

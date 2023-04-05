#include "main.h"

/**
 * _puts_recursion - sets the value of a pointer to  a char
 * @s: is a pointer to an array of characters
 * Return: return void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	} _putchar(*s);
	_puts_recursion(s + 1);
}

#include "main.h"
/**
 * _print_rev_recursion - prints the reverse of an array recursively
 * @s: is a pointer to an array of characters
 * Return: return void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}  _print_rev_recursion(s + 1);
	_putchar(*(s));
}

#include "main.h"
/**
 * _print_rev_recursion - prints the reverse of an array recursively
 * @s: is a pointer to an array of characters
 * Return: return void
 */
void _print_rev_recursion(char *s)
{
	size_t i = 0;
	size_t j = 0;

	if (*(s + i) == '\0')
	{
		return;
	}
	while (*(s + i) != '\0')
	{
		i++;
	}
	while  (i > j)
	{
		_putchar(*(s + i - 1));
		i--;
	} _print_rev_recursion(s - 1);
}

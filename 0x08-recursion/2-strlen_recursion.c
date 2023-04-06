#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 *@str:is a pointer to a string array
 * Return:always 0
 */
int _strlen_recursion(char *str)
{

	if (*str == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(str + 1));
	}
}

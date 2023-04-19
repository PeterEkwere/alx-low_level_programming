#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - is a funtion that prints a name
 * @name: is a pointer to an array of char
 * @f: is a pointer to a function
 * Returns:void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
	else
	{
		exit(0);
	}
}

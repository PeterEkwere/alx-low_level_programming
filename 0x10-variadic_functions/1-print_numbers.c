#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_numbers - is a function that prints numbers
 * @separator: is a pointer to a character
 * @n: is the number of arguments
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	unsigned int i;
	int d;

	va_start(arguments, n);

	for (i = 0; i < n; i++)
	{
		d = va_arg(arguments, int);
		printf("%i", d);
		if (i >= n - 1 || separator == NULL)
		{
			continue;
		} printf("%s", separator);
	} printf("\n");
	va_end(arguments);
}

#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_strings - this is a function that prints only strings
 * @separator: is a pointer to a char
 * @n:  is the amount of arguments
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	unsigned int i;
	char s[100];
	char *str;
	int j;

	va_start(arguments, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(arguments, char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		j = 0;
		while (str[j] != '\0')
		{
			s[j] = str[j];
			j++;
		}
		s[j] = '\0';
		printf("%s", s);
		if (i >= n - 1 || separator == NULL)
		{
			continue;
		}
		printf("%s", separator);
	} printf("\n");
	va_end(arguments);
}

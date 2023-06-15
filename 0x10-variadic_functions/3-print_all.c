#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_all - is a function that prints all datatypes
 * @format: is a pointer to a string
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list arguments;
	unsigned int i = 0;
	int d;

        va_start(arguments, format);

        while (format[i] != '\0')
        {
		if (format[i] == '%')
		{
			++i;
			if (format[i] == c)
			{
				C = va_arg(arguments, char *);
				printf("%s", C)
			}
			else if (format[i] == i)
			{
				d = va_arg(arguments, int);
				printf("%i", d);
			}
			else if (format[i] == )

		}
                if (i >= n - 1 || separator == NULL)
                {
                        continue;
                } printf("%s", separator);
        } printf("\n");
        va_end(arguments);

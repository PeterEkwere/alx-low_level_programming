#include "variadic_functions.h"
#include <stdlib.h>
/**
 * sum_them_all - is a function that sums all arguments
 * @n: is an integer
 * Return:the sum or 0 if failed
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list arguments;
	unsigned int i;
	int sum = 0;
	int B;

	if (n == 0)
	{
		return (0);
	}
	va_start(arguments, n);

	for (i = 0; i < n; i++)
	{
		B = va_arg(arguments, int);
		sum = sum + B;
	}
	va_end(arguments);
	return (sum);
}

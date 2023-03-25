#include <stdio.h>
#include "main.h"
#include <limits.h>
/**
 * print_last_digit - prints the last digit of  a number
 *
 * @c: is an integer
 *
 * Return: always 0 success
 */
int print_last_digit(int c)
{
	int last_digit;

	if (c == INT_MIN)
	{
		last_digit = 8;
	}
	else
	{
		last_digit = _abs(c) % 10;
	}

                _putchar(last_digit + '0');
        return (last_digit);

}

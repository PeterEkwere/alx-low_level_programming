#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - prints the last digit of  a number
 *
 * @c: is an integer
 *
 * Return: always 0 success
 */
int print_last_digit(int c)
{
	int num = _abs(c);
	int last_digit = num % 10;
	
	_putchar(last_digit + '0');
	return (0);
}

#include <stdlib.h>
#include "main.h"
/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The integer value of the converted string.
 */
int _atoi(char *s)
{
	int sign = 1;
	int num = 0;

	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	while (*s)
	{
		if (*s >= '0' && *s <= '9')
		{
			num = num * 10 + (*s - '0');
			s++;
		}
		else
		{
			break;
		}
	} return sign * num;
}

/**
 * _isdigit - Checks for a digit (0-9).
 * @c: The number to be checked.
 *
 * Return: 1 if the number is a digit, 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	else
		return (0);
}
/**
 * _puts - Prints a string to stdout.
 * @str: The string to be printed.
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
/**
 * main - is a functon that multiplies two positive numbers
 * @argc: this is the argument count
 * @argv: This is an array of pointers to arguments
 * Return: returns an integer
 */
int main(int argc, char **argv)
{
	int mul = 0;
	int num1;
	int num2, c, i;
	char *str = "Error";

	if (argc != 3)
	{
		_puts(str);
		exit(98);
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);

	if (!_isdigit(num1) || !_isdigit(num2))
	{
		_puts(str);
		exit(98);
	}
	mul = num1 * num2;

	if (mul == 0)
	{
		_putchar('0');
	}
	for (i = 0; argv[1][i] != '\0' || argv[2][i] != '\0'; i++)
	{
		c = (mul % 10) + '0';
		_putchar(c);
		mul /= 10;
	} return (0);
}

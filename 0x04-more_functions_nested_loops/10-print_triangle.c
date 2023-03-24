#include "main.h"
/**
 * print_triangle - prints out a triangle followed by a new line
 *
 * @size: is an integer that determines the size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size == 0)
	{
		_putchar('\n');
	}

	for (i = 1; i < size + 1; i++)
	{
		for (k = 0; k <	size - i ; k++)
		{
			_putchar(' ');
		}
		for (j = 0; j < i; j++)
		{
			_putchar('#');
		} _putchar('\n');
	}
}

#include "main.h"
/**
 * get_bit - is a function that
 * gets the value at a given index
 *
 * @n: is an unsigned integer
 * @index: is the index of the value to be extracted
 * Return: the value at index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int a;
	int b;

	if (index > 31)
	{
		return (-1);
	}

	a = 1 << index;

	b = (n & a) >> index;

	return (b);
}

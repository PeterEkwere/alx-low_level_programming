#include "main.h"
/**
 * binary_to_uint - is a function that converts
 * a binary digit to unary digit
 *
 * @b: is a pointer to an array of char binary
 * Return: an  unsigned int if true and 0 if false
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int un;
	unsigned int i = 0;
	unsigned int result = 0;

	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '1')
		{
			un = (result << 1) | 1;
			result = un;
		}
		else if (b[i] == '0')
		{
			un = (result << 1);
			result = un;
		}
		else
		{
			return (0);
		}
	}

	return (result);
}

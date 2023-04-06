#include "main.h"
/**
 * _pow_recursion - returns result of x raised to y
 * @x: is a base integer
 * @y: is the exponent
 * Return: return void
 */
int _pow_recursion(int x, int y)
{
	int c, result;

	if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else if (y < 0)
	{
		result = 1 / _pow_recursion(x, -y);
		return (result);
	}
	else if ((y % 2) == 0)
	{
		result = _pow_recursion((x * x), (y / 2));
		return (result);
	}
	else if ((y % 2) != 0)
	{
		c = _pow_recursion((x * x), ((y - 1) / 2));
		result = c * x;
		return (result);
	}

	return (-1);
}

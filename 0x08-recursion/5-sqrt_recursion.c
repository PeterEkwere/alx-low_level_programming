#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: is an integer to be squared
 * Return:a squared integer
 */
int _sqrt_recursion(int n)
{
	int low = 1;
	int high = n;
	int mid = (high + low) / 2;

	if (n == 0 || n == 1)
	{
		return (n);
	}
	
	
	
	if ((mid * mid) == n)
	{
		return (mid);
	}
	else if ((mid * mid) < n)
	{
		return  _sqrt_recursion(n - mid * mid) + mid;
	}
	else if ((mid * mid) > n)
	{
		_sqrt_recursion(n - (mid - 1) * (mid - 1));
	}
	return (-1);
}

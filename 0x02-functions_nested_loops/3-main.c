#include <stdio.h>
#include "main.h"
/**
 * void -  function takes an integer argument c, and checks if lowercase
 *
 * Return: return 1 if lowercase else 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

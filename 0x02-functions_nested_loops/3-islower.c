#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - checks for lowercase character.
 *
 * Return: return 1 if true and 0 if fales
 */
int main(void)
{
	int r;
		r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}

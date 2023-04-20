#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add - a function that adds variables
 * @a: a variable
 * @b: a variable
 * Return: an int
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - a function that subtracts variables
 * @a: a variable
 * @b: a variable
 * Return: an int
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - a function that multiply variables
 * @a: a variable
 * @b: a variable
 * Return: an int
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - a function that divides variables
 * @a: a variable
 * @b: a variable
 * Return: an int
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - a function that gets the modulor of variables
 * @a: a variable
 * @b: a variable
 * Return: an int
 */
int op_mod(int a, int b)
{
	return (a % b);
}

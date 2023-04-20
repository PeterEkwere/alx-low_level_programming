#include "3-calc.h"
#include <stdlib.h>
#include <string.h>
/**
 * get_op_func - is a function that selects the right function to call
 * @s: is a pointer to a char
 * Return: a pointer to the function corresponding to the argument
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[6] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	 };
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (strcmp(s, ops[i].op) == 0)
		{
			return (ops[i].f);
		} i++;
	} return (NULL);
}

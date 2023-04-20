#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - performs basic arithmetic on integer variables
 * @argc: argument count
 * @argv: an array of pointers to arguments
 * Return: result of arithmetic
 */
int main(int argc, char *argv[])
{
	int result;
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (*argv[2] != '+' && *argv[2] != '%' && *argv[2] != '/'
		&& *argv[2] != '-' && *argv[2] != '*')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '/' && num2 == 0) || (*argv[2] == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	result = get_op_func(argv[2])(num1, num2);
	printf("%i\n", result);
	return (0);
}

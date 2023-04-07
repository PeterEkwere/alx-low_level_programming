#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * main - entry point
 * @argv:is the argument passed
 * @argc:is the number of arguments passed
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int num = argc - 1;
	int i = 0;

	while (i < argc)
	{
		if (strstr(argv[i], ","))
		{
			num++;
		}
		i++;
	}
	printf("%d\n", num);
	return (0);
}

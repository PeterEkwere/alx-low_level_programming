#include <stdio.h>
#include "main.h"
/**
 * main - point of entry
 * @argc: this is the argument count
 * @argv: this is a pointer to an array of argument
 * Return: always 0
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	} return (0);
}

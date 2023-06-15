#include <stdio.h>
/**
 * main - entry point
 * @argc: is the argument count
 * @argv: is the argument variables
 * Return: is going to return 0
 */
int main(int argc, char **argv)
{
	int i = 0;
	while (argv[i] != NULL)
	{
		printf("%s\n", argv[i]);
		i++;
	}
}

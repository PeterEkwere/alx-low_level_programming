#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - entry point
 * @argc: this is the argument count
 * @argv: this is the argument vector
 * Return: always 0
 */
int main(int argc, char **argv)
{
	int i;
	size_t j;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (argv[i][0] == '-' || argv[i][0] == '+')
		{
			j = 1;
		}
		else
		{
			j = 0;
		}
		for (; j < strlen(argv[i]); j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
			}
		}
		sum = sum + atoi(argv[i]);
	} printf("%d\n", sum);
	return (0);
}

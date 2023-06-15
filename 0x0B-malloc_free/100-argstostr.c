#include <stdlib.h>
#include "main.h"
/**
 * argstostr - is a function that concatenates all argv 
 * @ac: is the argument count
 * @argv: is the argument vector
 * Return: a pointer to the concataneted argv
 */
char *argstostr(int ac, char **av)
{
	int i;
	int j;
	int k;
	int h = 0;

	av = malloc(ac * sizeof(char));

	for (i = 0; i < ac; i++)
	{
		av[i] = malloc(50 * sizeof(char));
	}

	for (j = 0; j < ac; j++)
	{
		for (k = 0; k < ac - j; k++)
		{
			while (av[j][h] != '\0')
			{
				h++;
			}
			av[j][h] = av[k][k]

#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * main - is function that prints the path
 * Return: 0
 */
int main(void)
{
	char *path = _getenv("PATH");
	char *token;

	token = strtok(path, ":");

	while (token != NULL)
	{
		printf("%s\n", token);
		token = strtok(NULL, ":");
	}
	return (0);
}

#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	char *line = NULL;
	ssize_t len = 0;
	ssize_t read;
	char *argv = {"ls", "-a", "./"};


	printf("$ ");
	read = getline(&line, &len, stdin);


	printf("%s", line);
}

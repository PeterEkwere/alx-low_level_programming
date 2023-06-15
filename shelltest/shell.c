#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
/**
 * main - is a simple shell program
 *
 * Return:0
 */
int main(void)
{
	char *line = malloc(sizeof(char) * 1024);
	ssize_t len;
	ssize_t read;
	int status;
	pid_t id;
	char *argv[10];
	int i = 1;

	while (1)
	{
		printf("#cisfun$ ");
		read = getline(&line, &len, stdin);
		id = fork();
		if (id == 0)
		{
			argv[0] = strtok(line, " \n");

			while (argv[i] != NULL && i < 10 - 1)
			{
				argv[i] = strtok(NULL, " \n");
				i++;
			} execve(argv[0], argv, NULL);
		} wait(&status);
	}
	return (0);
}

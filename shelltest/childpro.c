#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
/**
 * main - entry point
 *
 * Return:0
 */
int main(void)
{
	int id;
	int i = 0;
	int status;
	char *argv[] = {"/usr/bin/ls", "-l", "/tmp", NULL};

	id = fork();

	while (i < 2)
	{
		if (id != 0)
		{
			fork();
		} i++;
	}
	if (id != 0)
	{
		wait(&status);
	}
	execve(argv[0], argv, NULL);

	return (0);
}

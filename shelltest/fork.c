#include <stdio.h>
#include <unistd.h>
/**
 * main - point of entry
 *
 * Return:0
 */
int main(void)
{
	pid_t my_pid;
	pid_t pid;

	printf("before fork :\n");
	my_pid = fork();
	if (my_pid == -1)
	{
		perror("Error: \n");
		return (-1);
	}
	printf("after fork :\n");
	pid = getpid();
	printf("%i\n", pid);
	printf("hello world\n");

	return (0);
}

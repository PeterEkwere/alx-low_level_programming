#include <stdio.h>
#include <unistd.h>
/**
 * main - point of entry
 * @argc: This is the argument vector count
 * @env: this is an array of ennviroment variables
 * @argv: This ia an array of arguments
 *
 * Return: 0
 */
extern char **environ;

int main(int argc, char **argv, char **env)
{

	printf("%p\n", &environ);
	printf("%p\n", &env);
	return (0);
}

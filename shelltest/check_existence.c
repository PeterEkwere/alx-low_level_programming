#include <stdio.h>
#include <unistd.h>
/**
 * check_existence - is a function that checks if a file exist
 * @file_name: is the name of the file 
 *
 * Return: 0 if susseful or NULL if not
 */
int check_existence(char *file_name)
{
	if (access(file_name, F_OK) == 0)
	{
		printf("%s: Found\n", file_name);
		return (0);
	}
	else
	{
		printf("%s: Not found\n", file_name);
		return (-1);
	}
	return (0);

}
/**
 * main - entry point
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i = 1;

	if (argc < 2)
	{
		printf("_which filename ... \n");
		return (-1);
	}

	while (argv[i])
	{
		check_existence(argv[i]);
		i++;
	}
	return (0);
}

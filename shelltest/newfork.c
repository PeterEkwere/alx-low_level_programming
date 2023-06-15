#include <unistd.h>
#include <>
#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	int id;
	int m;
	int i;
	id = fork();
	
	if (id == 0)
	{
		m = 1;
	}
	else
	{
		m = 6;
	}

	if (id != 0)
	{
		wait();
	}

	for (i = m; i < m + 5; i++)
	{
		printf("%i", i);
	}
	printf("\n");
	return (0);
}

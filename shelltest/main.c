#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include <assert.h>
/**
 * main - entry point
 *
 * Return: an integer
 */
int main(void)
{
	linked_path *head = link_path();
	while (head != NULL)
	{
		char *dr = head->dir;
		printf("%s\n", dr);
		head = head->next;
	}
	return (0);
}

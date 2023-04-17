#include "dog.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
 * print_dog - is a function that prints the
 * values in the members of a custom datatype.
 * @d: is a pointer to a variable of type struct dog
 * return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		exit(0);
	}
	if ((*d).name == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("NAME: %s\n", (*d).name);
	}
	if ((*d).age == -1.0)
	{
		printf("(nil)");
	}
	else
	{
		printf("Age: %f\n", (*d).age);
	}
	if ((*d).owner == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("Owner: %s\n", (*d).owner);
	}
}

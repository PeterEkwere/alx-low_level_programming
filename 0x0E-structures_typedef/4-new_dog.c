#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - is a function that initializes a variable
 * @name: is a pointer to a char array
 * @age: is an integer value
 * @owner: is a pointer to a char array
 * Return: pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(*d));

	if (d == NULL)
	{
		exit(0);
	}
	(*d).name = malloc(sizeof((*d).name));

	if ((*d).name == NULL)
	{
		exit(0);
	}
	(*d).name = name;
	(*d).age = age;
	(*d).owner = malloc(sizeof((*d).owner));

	if ((*d).owner == NULL)
	{
		exit(0);
	}
	(*d).owner = owner;

	return (d);
}

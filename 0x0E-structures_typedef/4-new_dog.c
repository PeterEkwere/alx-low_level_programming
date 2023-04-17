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
	size_t i = 0;
	size_t j = 0;
	dog_t *d = malloc(sizeof(*d));

	if (d == NULL)
	{
		exit(0);
	}
	while (name[i] != '\0')
	{
		i++;
	}
	while (owner[j] != '\0')
	{
		j++;
	}
	(*d).owner = malloc(j + 1);
	(*d).name = malloc(i + 1);
	if ((*d).owner == NULL || (*d).name == NULL)
	{
		exit(0);
	}
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;

	return (d);
}

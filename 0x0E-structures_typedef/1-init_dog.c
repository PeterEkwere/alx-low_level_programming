#include "dog.h"
/**
 * init_dog - is a function that initializes a variable
 * @d: is a variable with type struct dog
 * @name: is a pointer to a char array
 * @age: is an integer value
 * @owner: is a pointer to a char array
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}

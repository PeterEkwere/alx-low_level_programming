#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - is a function that frees previously allocated memory
 * @d: is a pointer to a variable of type dog
 * Return:void
 */
void free_dog(dog_t *d)
{
	free((*d).name);
	free((*d).owner);
	free(d);
}

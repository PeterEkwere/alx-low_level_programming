#ifndef DOG_H_
#define DOG_H_
/**
 * struct dog - is a structure
 * @name: is the name of the dog
 * @age: is the age of the dog
 * @owner: is the owner of the dog
 * Return: void;
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif

#include "hash_tables.h"
/**
 * hash_table_create - is a function that creates the hash table
 * @size: is the size of th hash_table
 * Return: a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = (hash_table_t *)malloc(sizeof(hash_table_t));
	unsigned int i = 0;

	if (table == NULL)
	{
		printf("malloc failed");
		free(table);
		return (NULL);
	}
	table->size = size;
	table->array = (hash_node_t **)calloc(table->size, sizeof(hash_node_t *));

	for (i = 0; i < table->size; i++)
	{
		table->array[i] = NULL;
	}
	return (table);
}

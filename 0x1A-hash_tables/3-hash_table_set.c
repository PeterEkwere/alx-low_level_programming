#include "hash_tables.h"
/**
 * hash_table_set - is a function that creates-->
 * <-- an element and adds it to the hash_table
 *
 * @ht: is a pointer to the hash_table
 * @key: is the key to be added
 * @value: is the value to be added
 * Return: 1 if Success or 0 if Fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int hash_index = key_index((unsigned char *)key, ht->size);
	hash_node_t *new_node = (hash_node_t *)malloc(sizeof(hash_node_t));
	int i;

	if (new_node == NULL)
	{
		printf("Malloc Error\n");
		return (0);
	}
	for (i = hash_index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = strdup(value);
			return (1);
		}
	}
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;
	if (ht->array[hash_index] != NULL)
	{
		new_node->next = ht->array[hash_index];
		ht->array[hash_index] = new_node;
		return (1);
	}
	ht->array[hash_index] = new_node;
	return (1);
}

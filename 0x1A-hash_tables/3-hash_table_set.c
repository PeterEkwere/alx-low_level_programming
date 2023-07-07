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
	unsigned long int hash_index = key_index((unsigned char *)key, MAX_SIZE);
	hash_node_t *new_node = (hash_node_t *)malloc(sizeof(hash_node_t));

	if (new_node == NULL)
	{
		printf("Malloc Error\n");
		return (0);
	}
	new_node->key = malloc(strlen(key) + 1);
	new_node->value = malloc(strlen(key) + 1);

	if (new_node->key == NULL || new_node->value == NULL)
	{
		printf("malloc failed");
		return (0);
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

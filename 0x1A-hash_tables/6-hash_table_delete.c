#include "hash_tables.h"
/**
 * hash_table_delete - is afunction that deletes the hash table
 * @ht: is an array of pointers
 * Return:void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *temp = ht;
	hash_node_t *node = NULL;
	unsigned long int i;
	hash_node_t *temp_node = NULL;

	for (i = 0; i < temp->size; i++)
	{
		if (temp->array[i] != NULL)
		{
			node = temp->array[i];
			while (node != NULL)
			{
				temp_node = node;
				node = node->next;
				free(temp_node->key);
				free(temp_node->value);
				free(temp_node);
			}
		}
	}
	free(ht->array);
	free(ht);
}	

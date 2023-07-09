#include "hash_tables.h"
/**
 * hash_table_print - is a function that prints the table
 * @ht: is the Table
 * Return:void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	const hash_node_t *hash_slot = NULL;
	int comma = 0;

	if (ht != NULL)
	{
		printf("{");
		while (i < ht->size)
		{
			if (ht->array[i] == NULL)
				i += 1;
			if (ht->array[i] != NULL)
			{
				if (comma == 1)
					printf(", ");
				hash_slot = ht->array[i];
				while (hash_slot != NULL)
				{
					printf("'%s': '%s'", hash_slot->key, hash_slot->value);
					hash_slot = hash_slot->next;
					if (hash_slot != NULL)
						printf(", ");
				}
				comma = 1;
			}
			i += 1;
		}
		if (i == ht->size)
		{
			printf("}\n");
		}
	}
}

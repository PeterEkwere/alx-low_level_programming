#include "hash_tables.h"
/**
 * hash_table_get - is a function that returns the value-->
 * <-- associated with a key
 *
 * @ht: is a hash table
 * @key: is the key
 * Return: NULL if failed or Key if successfull
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = key_index((unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
	{
		return (NULL);
	}
	else
	{
		return (ht->array[index]->value);
	}
	return (NULL);
}

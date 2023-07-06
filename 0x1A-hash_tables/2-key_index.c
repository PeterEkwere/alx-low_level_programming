#include "hash_tables.h"
/**
 * key_index - is a function that
 * returns the index of a key
 *
 * @key: is the key to be hashed
 * @size: is the size of the array
 * Return: The Key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	unsigned long int hash_value;

	/** To get the hash value **/
	hash_value = hash_djb2(key);

	/** to get the index **/
	index = hash_value % size;

	return (index);
}

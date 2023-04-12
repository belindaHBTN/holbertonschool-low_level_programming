#include "hash_tables.h"

/**
 * key_index - get the index of a key
 * @key: the key
 * @size: the size of the array of the hash table
 *
 * Description: get the index of a key
 * Return: the index at which the key/value pair should be stored
 * in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	if (key == NULL)
	{
		return (0);
	}

	if (size == 0)
	{
		return (0);
	}

	index = hash_djb2(key) % size;

	return (index);
}

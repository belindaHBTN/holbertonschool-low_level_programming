#include "hash_tables.h"

/**
 * hash_table_get - retrieve a value associated with a key
 * @ht: the hash table
 * @key: the key, can not be an empty string
 *
 * Description: retrieve a value associated with a key
 * Return: the value associated with the element,
 *  or NULL if key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index;
	hash_node_t *pRear;

	if (ht == NULL)
	{
		return (NULL);
	}
	index = key_index((const unsigned char *)key, ht->size);

	pRear = (ht->array)[index];
	if (pRear == NULL)
	{
		return (NULL);
	}
	while (strcmp(pRear->key, key) != 0)
	{
		pRear = pRear->next;
	}

	return (pRear->value);
}

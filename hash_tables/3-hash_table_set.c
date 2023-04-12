#include "hash_tables.h"

/**
 * hash_table_set - add an element to the hash table
 * @ht: the hash table
 * @key: the key, can not be an empty string
 * @value: the value associated with the key, can be an empty string.
 *
 * Description: add an element to the hash table
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int index;
	hash_node_t *new_node;

	index = key_index((const unsigned char *)key, ht->size);

	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
	{
		return (0);
	}
	new_node->key = strdup(key);
	new_node->value = strdup(value);

	new_node->next = (ht->array)[index];
	(ht->array)[index] = new_node;

	return (1);
}

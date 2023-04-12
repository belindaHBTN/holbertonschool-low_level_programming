#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: unsigned long int, the size of the array in hash table
 *
 * Description: creates a hash table
 * Return: the pointer to the hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *tp;
	unsigned long int i;

	if (size == 0)
	{
		return (NULL);
	}

	tp = malloc(sizeof(*tp));
	if (tp == NULL)
	{
		return (NULL);
	}

	tp->size = size;

	tp->array = malloc(sizeof(*(tp->array)) * size);
	if (tp->array == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < size)
	{
		tp->array[i] = NULL;
		i = i + 1;
	}

	return (tp);
}

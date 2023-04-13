#include "hash_tables.h"

/**
 * hash_table_delete - delete a hash table
 * @ht: the hash table
 *
 * Description: delete a hash table
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *pRear;
	hash_node_t *tmp;

	if (ht == NULL)
	{
		return;
	}

	i = 0;
	while (i < ht->size)
	{
		pRear = (ht->array)[i];
		while (pRear != NULL)
		{
			tmp = pRear->next;
			free(pRear->key);
			free(pRear->value);
			free(pRear);
			pRear = tmp;
		}
		i = i + 1;
	}
	free(ht->array);
	free(ht);
}

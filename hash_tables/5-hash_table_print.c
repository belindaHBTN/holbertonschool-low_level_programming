#include "hash_tables.h"

/**
 * hash_table_print - print a hash table
 * @ht: the hash table
 *
 * Description: print a hash table
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	long unsigned int i;
	hash_node_t *pRear;
	int flag;

	if (ht == NULL)
	{
		return;
	}

	printf ("{");
	i = 0;
	flag = 1;
	while (i < (ht->size))
	{
		pRear = (ht->array)[i];
		while (pRear != NULL)
		{
			if (flag == 1)
			{
				printf("'%s': '%s'", pRear->key, pRear->value);
				pRear = pRear->next;
				flag = 0;
			}
			else
			{
				printf(", '%s': '%s'", pRear->key, pRear->value);
				pRear = pRear->next;
			}
		}
		i = i + 1;
	}
	printf ("}\n");
}

#include "lists.h"

/**
 * list_len - return the number of elements in a linked list_t list
 * @h: head node
 *
 * Description: return the number of elements in a lined list_t list
 * Return: the number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t i;

	if (h == NULL)
	{
		return (0);
	}

	i = 0;
	while (h != NULL)
	{
		h = h->next;
		i = i + 1;
	}
	return (i);
}

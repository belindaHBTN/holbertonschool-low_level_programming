#include "lists.h"

/**
 * dlistint_len - returns the number of elements
 * @h: head node
 *
 * Description: returns the number of elements
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	if (h == NULL)
	{
		return (0);
	}

	i = 1;
	while (h->next != NULL)
	{
		h = h->next;
		i = i + 1;
	}
	return (i);
}

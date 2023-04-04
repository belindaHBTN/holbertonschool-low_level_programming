#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: head node
 *
 * Description: print all the elements of a dlistint_t list
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	if (h == NULL)
	{
		return (0);
	}

	i = 1;
	printf("%d\n", h->n);
	while (h->next != NULL)
	{
		h = h->next;
		printf("%d\n", h->n);
		i = i + 1;
	}
	return (i);
}

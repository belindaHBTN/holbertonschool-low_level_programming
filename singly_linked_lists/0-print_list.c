#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - print every node
 * @h: head node
 *
 * Description: print every node
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	int i;

	if (h == NULL)
	{
		return (0);
	}

	i = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		{
		h = h->next;
		i = i + 1;
	}
	return (i);
}

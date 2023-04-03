#include "lists.h"

/**
 * free_list - frees a list_t list
 * @h: head node
 *
 * Description: frees a list_t list
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *pCurrent;
	list_t *pNext;

	if (head == NULL)
	{
		return;
	}

	pCurrent = head;
	while (pCurrent != NULL)
	{
		pNext = pCurrent->next;
		free(pCurrent->str);
		free(pCurrent);
		pCurrent = pNext;
	}
}

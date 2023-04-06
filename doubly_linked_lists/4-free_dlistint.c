#include "lists.h"

/**
 * free_dlistint - free a dlistint_t list
 * @head: pointer to dlistint_t
 *
 * Description: free a dlistint_t list
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *pCurrent;
	dlistint_t *pNext;

	if (head == NULL)
	{
		return;
	}
	else
	{
		pCurrent = head;
		while (pCurrent != NULL)
		{
			pNext = pCurrent->next;
			free(pCurrent);
			pCurrent = pNext;
		}
	}
}

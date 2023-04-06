#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a linked list
 * @head: pointer to the pointer to  dlistint_t
 * @index: the index of the node
 *
 * Description: deletes the node at index of a linked list
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *pRear;
	unsigned int i;

	if (head == NULL)
	{
		return (-1);
	}

	pRear = *head;
	if (index == 0)
	{
		if (pRear == NULL)
		{
			free(pRear);
			return (-1);
		}
		*head = pRear->next;
		pRear->next->prev = NULL;
		free(pRear);
		pRear = NULL;
		return (1);
	}

	i = 1;
	while (i <= index)
	{
		pRear = pRear->next;
		if (pRear == NULL)
		{
			return (-1);
		}
		i = i + 1;
	}
	pRear->prev->next = pRear->next;
	if (pRear->next == NULL)
	{
		free(pRear);
		pRear = NULL;
		return (-1);
	}
	pRear->next->prev = pRear->prev;
	free(pRear);
	pRear = NULL;
	return (1);
}

#include "lists.h"

/**
 * get_dnodeint_at_index - get the node of a dlistint_t linked list
 * @head: pointer to the dlistint_t
 * @index: nth node of the list
 *
 * Description: get the node of a dlistint_t linked list
 * Return: the address of the nth element, or NULL if it failed.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *pRear;
	unsigned int i;

	if (head == NULL)
	{
		return (NULL);
	}
	else
	{
		pRear = head;
		i = 0;
		while (i < index)
		{
			if (pRear == NULL)
			{
				return (NULL);
			}
			pRear = pRear->next;
			i = i + 1;
		}
		return (pRear);
	}
}

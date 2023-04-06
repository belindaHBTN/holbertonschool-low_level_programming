#include "lists.h"

/**
 * add_dnodeint- add a new node at the beginning of a dlistint_t list
 * @head: pointer to the pointer to the dlistint_t
 * @n: the value of the node
 *
 * Description: add a new node at the beginning of a dlistint_t list
 * Return: the address of the new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *pRear;

	if (head == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		pRear = *head;
		while (pRear->next != NULL)
		{
			pRear = pRear->next;
		}
		pRear->next = new_node;
		new_node->prev = pRear;
	}

	return (*head);
}

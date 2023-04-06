#include "lists.h"

/**
 * create_new_node - create a new node
 * @n: the value of the new node
 *
 * Description: create a new node
 * Return: the new node
 */
dlistint_t *create_new_node(int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	return (new_node);
}




/**
 * insert_dnodeint_at_index - insert a new node at a given position
 * @h: pointer to the dlistint_t
 * @idx: the idxth of node (position)
 * @n: the value of the insert node
 *
 * Description:insert a new node at a given position
 * Return: the address of the new_node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *pRear;
	unsigned int i;
	dlistint_t *new_node;

	if (h == NULL)
		return (NULL);

	new_node = create_new_node(n);
	if (new_node == NULL)
		return (NULL);

	pRear = *h;
	if (idx == 0)
	{
		*h = new_node;
		new_node->next = pRear;
		if (pRear != NULL)
		{
			pRear->prev = new_node;
		}
		return (new_node);
	}

	i = 1;
	while (i <= idx)
	{
		if (pRear == NULL)
		{
			free(new_node);
			return (NULL);
		}
		new_node->prev = pRear;
		pRear = pRear->next;
		i = i + 1;
	}
	new_node->prev->next = new_node;
	new_node->next = pRear;
	if (pRear != NULL)
		pRear->prev = new_node;
	return (new_node);
}

#include "lists.h"

/**
 * add_node_end - add a new node at the end of a list_t list
 * @head: the address of the head node
 * @str: the string in the list_t
 *
 * Description: add a new nod at the end of a list_t list
 * Return: the address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *pRear;
	size_t i;

	new_node = malloc(sizeof(*new_node));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);

	i = 0;
	while (str[i] != '\0')
	{
		i = i + 1;
	}
	new_node->len = i;
	new_node->next = NULL;

	pRear = *head;
	if (pRear == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (pRear->next != NULL)
		{
			pRear = pRear->next;
		}
		pRear->next = new_node;
	}

	return (*head);
}

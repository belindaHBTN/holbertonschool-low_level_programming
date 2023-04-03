#include "lists.h"

/**
 * add_node - add a new node at the beginning of a list_t list
 * @head: the address of the head node
 * @str: the string in the list_t list
 *
 * Description: add a new nod at the beginning of a list_t list
 * Return: the address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t i;

	if (head == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(list_t));
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

	new_node->next = *head;
	*head = new_node;

	return (*head);
}

#include "sort.h"

/**
 * bubble_sort - a function that sorts an array of integers in ascending order
 * using the Bubble sort algorithm
 * @array: the pointer to the array that need to be sorted
 * @size: number of elements in the array
 *
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current;
	listint_t *tmp;

	if (!list)
		return;

	current = *list;
	while (current)
	{
		while (current->next != NULL && (current->n > current->next->n))
		{
			tmp = current->next;
			current->next = tmp->next;
			tmp->prev = current->prev;

			if (current->prev != NULL)
			{
				current->prev->next = tmp;
			}
			current->prev = tmp;

			if (tmp->next != NULL)
			{
				tmp->next->prev = current;
			}
			tmp->next = current;

			if (tmp->prev != NULL)
			{
				current = tmp->prev;
			}
			else
			{
				*list = tmp;
			}

			print_list(*list);
		}
		current = current->next;
	}
}

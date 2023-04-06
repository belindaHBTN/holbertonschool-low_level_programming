#include "lists.h"

/**
 * sum_dlistint - caculate the sum of all the data;
 * @head: pointer to the dlistint_t
 *
 * Description: calculate the sum of all the data;
 * Return: the sum of all the data
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *pRear;
	int sum;

	if (head == NULL)
	{
		return (0);
	}
	else
	{
		pRear = head;
		sum = 0;
		while (pRear != NULL)
		{
			sum = sum + pRear->n;
			pRear = pRear->next;
		}
		return (sum);
	}
}

#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers.
 * @array: a pointer to the first element of the array to search in.
 * @size: number of elements in array.
 * @value: the value to search for.
 *
 * Return: the index of the searching value
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!value || !array)
	{
		return (-1);
	}

	i = 0;
	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return ((int)i);
		}
		i = i + 1;
	}

	return (-1);
}

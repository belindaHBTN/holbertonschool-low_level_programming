#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * @array: a pointer to the first element of the array to search in.
 * @size: number of elements in array.
 * @value: the value to search for.
 *
 * Return: the index of the value
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t pos = 0;
	size_t l = 0;
	size_t h = size - 1;

	if (array == NULL || value == 0)
	{
		return (-1);
	}

	while (array[pos] != value)
	{
		pos = l + (((h - l) / (array[h] - array[l])) * (value - array[l]));
		if (pos > size)
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			return (-1);
		}
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
		{
			return ((int)pos);
		}
		else if (array[pos] > value)
		{
			h = pos - 1;
		}
		else
		{
			l = pos + 1;
		}
	}

	return (-1);
}

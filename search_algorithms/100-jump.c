#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers
 * @array: a pointer to the first element of the array to search in.
 * @size: number of elements in array.
 * @value: the value to search for.
 *
 * Return: the index of the value
 */

int jump_search(int *array, size_t size, int value)
{
	size_t start;
	size_t end;
	size_t i;

	if (!value || !array)
	{
		return (-1);
	}

	start = 0;
	end = sqrt(size);
	printf("Value checked array[%ld] = [%d]\n", start, array[start]);
	while (array[end] < value && end < size)
	{
		start = end;
		end = end + sqrt(size);
		printf("Value checked array[%ld] = [%d]\n", start, array[start]);
	}

	printf("Value found between indexes [%ld] and [%ld]\n", start, end);

	i = start;
	while (i < end && i < size)
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

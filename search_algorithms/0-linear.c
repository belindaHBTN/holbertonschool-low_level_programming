#include "search_algos.h"

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

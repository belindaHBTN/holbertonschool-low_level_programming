#include <stdlib.h>

/**
 * int_index - search for an integer.
 * @array: array of integer
 * @size: the size of the array
 * @cmp: the function need to be executed
 *
 * Return: the index of the searched element, or -1 if fail.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}

	if (array != NULL && cmp != NULL)
	{
		i = 0;
		while (i < size)
		{
			if (cmp(array[i]) == 1)
			{
				return (i);
			}
			i = i + 1;
		}
	}
	return (-1);
}

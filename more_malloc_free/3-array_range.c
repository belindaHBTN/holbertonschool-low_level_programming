#include "main.h"
#include <stdlib.h>

/**
 * array_range - create an array of integers.
 * @min: the minium number
 * @max: the max number
 *
 * Description: create an array of integers.
 * Return: a pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int *p;
	int len;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	len = max - min + 1;

	p = malloc(sizeof(int) * len);
	if (p == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (min <= max)
	{
		p[i] = min;
		i = i + 1;
		min = min + 1;
	}
	return (p);
}

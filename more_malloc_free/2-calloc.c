#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocate memory for an array
 * @nmemb: number of elements
 * @size: the size of every element
 *
 * Description: allocate memory for an array
 * Return: a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	p = malloc(size * nmemb);
	if (p == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < size * nmemb)
	{
		p[i] = 0;
		i = i + 1;
	}

	return (p);
}

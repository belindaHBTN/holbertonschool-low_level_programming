#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array and initialize it
 * @size: size of the array
 * @c: the character that will be initialized to the array
 *
 * Description: creates an array and initialize it with a character.
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	p = (char *)malloc(sizeof(char) * size);
	if (p == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		*(p + i) = c;
		i = i + 1;
	}
	return (p);
}

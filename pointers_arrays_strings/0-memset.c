#include "main.h"

/**
 * _memset - fill memory with a constant byte
 * @s: char array
 * @b: constant byte
 * @n: integer
 *
 * Description: fill memory with a constant byte.
 * Return: char array.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(s + i) = b;
		i = i + 1;
	}
	return (s);
}

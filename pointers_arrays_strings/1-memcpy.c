#include "main.h"

/**
 * _memcpy - copy memory area
 * @dest: the destination array
 * @src: the source array
 * @n: unsigned integer
 *
 * Description: copy memory area.
 * Return: char array.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(dest + i) = *(src + i);
		i = i + 1;
	}
	return (dest);
}

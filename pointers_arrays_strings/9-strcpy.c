#include "main.h"

/**
 * _strcpy - copy an array.
 * @dest: pointer to an array.
 * @src: pointer to an array.
 *
 * Description: copy an array.
 * Return: the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i = i + 1;
	}
	*(dest + i) = '\0';

	return (dest);
}

#include "main.h"

/**
 * _strncpy - copy a string.
 * @dest: one char array
 * @src: another char array
 * @n: number of bytes from src
 *
 * Description: copy a string.
 * Return: a pointer to the resulting string dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int len;

	len = 0;
	while (src[len] != '\0')
	{
		len = len + 1;
	}

	i = 0;
	while (i < n)
	{
		if (i < len)
		{
			*(dest + i) = *(src + i);
		}
		else
		{
			*(dest + i) = '\0';
		}
		i = i + 1;
	}
	return (dest);
}

#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: one char array
 * @src: another char array
 * @n: number of bytes from src
 *
 * Description: concatenates two strings.
 * Return: a pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;
	int len;

	i = 0;
	while (*(dest + i) != '\0')
	{
		i = i + 1;
	}

	len = 0;
	while (src[len] != '\0')
	{
		len = len + 1;
	}

	if (n <= len)
	{
		j = 0;
		while (j < n)
		{
			*(dest + i + j) = *(src + j);
			j = j + 1;
		}
	}
	else
	{
		j = 0;
		while (j < len)
		{
			*(dest + i + j) = *(src + j);
			j = j + 1;
		}
	}

	*(dest + i + j) = '\0';
	return (dest);
}

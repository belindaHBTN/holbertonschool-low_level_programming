#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: one char array
 * @src: another char array
 *
 * Description: concatenates two strings.
 * Return: a pointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (*(dest + i) != '\0')
	{
		i = i + 1;
	}

	j = 0;
	while (*(src + j) != '\0')
	{
		*(dest + i + j) = *(src + j);
		j = j + 1;
	}
	*(dest + i + j) = '\0';
	return (dest);
}

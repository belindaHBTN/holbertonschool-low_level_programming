#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate two strings.
 * @s1: the first string.
 * @s2: the second string.
 *
 * Description: concatenate two strings
 * Return: a pointer to a new string, or NULL if it fails
 */
char *str_concat(char *s1, char *s2)
{
	int len1;
	int len2;
	char *p;
	int i;
	int j;

	len1 = 0;
	while (*(s1 + len1) != '\0')
	{
		len1 = len1 + 1;
	}

	len2 = 0;
	while (*(s2 + len2) != '\0')
	{
		len2 = len2 + 1;
	}

	p = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i <  len1)
	{
		*(p + i) = *(s1 + i);
		i = i + 1;
	}

	j = 0;
	while (j < len2)
	{
		*(p + i + j) = *(s2 + j);
		j = j + 1;
	}
	return (p);
}

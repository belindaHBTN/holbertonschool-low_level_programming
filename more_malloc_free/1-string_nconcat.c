#include "main.h"
#include <stdlib.h>

/**
 * _strlen - calculate the length of the string.
 * @str: string (array of chars)
 *
 * Description: calculate the length of the string.
 * Return: the length (integer)
 */

unsigned int _strlen(char *str)
{
	unsigned int len;

	len = 0;
	while (str[len] != '\0')
	{
		len = len + 1;
	}
	return (len);
}

/**
 * string_nconcat - concatenate two strings.
 * @s1: the first string.
 * @s2: the second string.
 * @n: the number of characters should be copied from s2.
 *
 * Description: concatenate two strings.
 * Return: pointer that point to a newly allocated space in memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i, j;
	char *p;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if (n >= len2)
	{
		n = len2;
	}

	p = malloc(sizeof(*p) * (len1 + n + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < len1)
	{
		p[i]  = s1[i];
		i = i + 1;
	}
	j = 0;
	while (j < n)
	{
		p[i + j] = s2[j];
		j = j + 1;
	}
	p[i + j] = '\0';
	return (p);
}

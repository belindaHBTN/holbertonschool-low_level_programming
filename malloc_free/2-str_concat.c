#include "main.h"
#include <stdlib.h>

/**
 * _strlen - calculate the length of the string.
 * @s: the string.
 *
 * Description: calculate the length of the string.
 * Return: an integer
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (*(s + len) != '\0')
	{
		len = len + 1;
	}
	return (len);
}

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

	p = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < len1)
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

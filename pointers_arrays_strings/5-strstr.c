#include "main.h"
#include <stdio.h>

/**
 * _strstr - locate a substring.
 * @haystack: a string.
 * @needle: a substring.
 *
 * Description: locate a substring..
 * Return: a pointer.
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (*(haystack + i) != '\0')
	{
		if (*(haystack + i) == *(needle + j))
		{
			j = j + 1;
		}
		else
		{
			j = 0;
		}
		if (*(needle + j + 1) == '\0')
		{
			return (haystack + i - j + 1);
		}
		i = i + 1;
	}
	return (NULL);
}

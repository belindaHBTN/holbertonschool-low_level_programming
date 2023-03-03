#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - search a string for any of a set of bytes.
 * @s: char array
 * @accept: char array that need to be searched
 *
 * Description: search a string for any of a set of bytes.
 * Return: char array.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	while (*(s + i) != '\0')
	{
		j = 0;
		while (*(accept + j) != '\0')
		{
			if (*(s + i) == *(accept + j))
			{
				return ((s + i));
				j = j + 1;
			}
			i = i + 1;
		}
	}
}

#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: the first string.
 * @s2: the second string.
 *
 * Description: compares two strings.
 * Return: an integer.
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (!(*(s1 + i) == 0 && *(s2 + i) == 0))
	{
		if (*(s1 + i) == *(s2 + i))
		{
			i = i + 1;
		}
		else
		{
			return (*(s1 + i) - *(s2 + i));
		}
	}
	return (0);
}

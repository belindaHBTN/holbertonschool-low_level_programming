#include "main.h"

/**
 * _strchr - locate a character in a string.
 * @s: char array.
 * @c: the letter that should be found.
 *
 * Description: locate a character in a string.
 * Return: the pointer to s.
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i = i + 1;
	}
}

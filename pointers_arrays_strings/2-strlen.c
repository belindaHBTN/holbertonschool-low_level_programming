#include "main.h"

/**
 * _strlen - count the length of the string
 * @s: a string
 *
 * Description: count the length of the string
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i = i + 1;
	}

	return (i);
}

#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicate the string in the new memory
 * @str: the string that need to be duplicated
 *
 * Description: duplicate the string in the new memory
 * Return: a pointer to a new string, or NULL if it fails
 */
char *_strdup(char *str)
{
	int len;
	char *p;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}

	len = 0;
	while (*(str + len) != '\0')
	{
		len = len + 1;
	}

	p = (char *)malloc(sizeof(char) * (len + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < len)
	{
		*(p + i) = *(str + i);
		i = i + 1;
	}
	p[i] = '\0';
	return (p);
}

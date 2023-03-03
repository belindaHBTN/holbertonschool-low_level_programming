#include "main.h"

/**
 * _strspn: get the length of a prefix substring.
 * @s: string
 * @accept: prefix substring.
 *
 * Description: get the length of a prefix substring.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	unsigned int count = 0;
	char *arr = "oleh";

	while (*(s + i) != '\0')
	{
		while (j < 4)
		{
			if (*(s + i) == *(arr + j))
			{
				count = count + 1;
			}
			j = j + 1;
		}
		i = i + 1;
	}
	return (count);
}

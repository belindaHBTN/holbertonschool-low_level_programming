#include "main.h"

/**
 * cap_string - capitalize all words of a string.
 * @s: string
 *
 * Description: capitalize all words of a string.
 * Return: char array.
 */
char *cap_string(char *s)
{
	int i;

	while(*(s + i) != '\0')
	{
		if (i == 0)
		{
			if ((*(s + i) >= 97) && (*(s + i) <= 122))
			{
				*(s + i) = *(s + i) - 32;
			}
		}
		else if ((*(s + i) == ' ') || (*(s + i) == '\n'))
		{
			if ((*(s + i + 1) >= 97) && (*(s + i + 1) <= 122))
			{
				*(s + i + 1) = *(s + i + 1) - 32;
			}
		}
		i = i + 1;
	}

	return (s);
}

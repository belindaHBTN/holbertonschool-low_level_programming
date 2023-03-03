#include "main.h"

/**
 * string_toupper - change all lowercase letters of a string to uppercase
 * @s: string
 *
 * Description: change all lowercase letters of a string to uppercase
 * Return: char array.
 */

char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		if ((*(s + i) >= 97) && (*(s + i) <= 122))
		{
			*(s + i) = *(s + i) - 32;
		}
		i = i + 1;
	}
	return (s);
}

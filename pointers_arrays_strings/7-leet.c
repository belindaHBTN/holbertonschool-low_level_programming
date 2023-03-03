#include "main.h"

/**
 * leet - encode a string into 1337.
 * @s: string
 *
 * Description: encode a string into 1337.
 * Return: char array
 */
char *leet(char *s)
{
	int i;
	int j;
	char *a = "aeotl";
	char *b = "AEOTL";
	char *c = "43071";

	i = 0;
	while (*(s + i) != '\0')
	{
		j = 0;
		while (j < 5)
		{
			if (*(s + i) == *(a + j) || *(s + i) == *(b + j))
			{
				*(s + i) = *(c + j);
				break;
			}
			j = j + 1;
		}
		i = i + 1;
	}
	return (s);
}

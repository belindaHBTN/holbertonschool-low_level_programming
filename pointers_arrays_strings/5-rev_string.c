#include "main.h"

/**
 * rev_string - print a string in reverse.
 * @s: string
 *
 * Description: print a string in reverse.
 */
void rev_string(char *s)
{
	int len;
	int i;
	int j;
	int temp;

	len = 0;
	while (s[len] != '\0')
	{
		len = len + 1;
	}


	i = len - 1;
	j = 0;
	while (j < (len / 2))
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;

		i = i - 1;
		j = j + 1;
	}
}

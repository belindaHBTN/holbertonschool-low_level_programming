#include "main.h"

/**
 * puts2 - print every other character of a string.
 * @str: string
 *
 * Description: print every other character of a string.
 */
void puts2(char *str)
{
	int i;
	int len;

	len = 0;
	while (str[len])
	{
		len = len + 1;
	}

	i = 0;
	while (i < len)
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}

#include "main.h"

/**
 * puts_half - print the second half of a string.
 * @str: string
 *
 * Description: print the second half of a string.
 */
void puts_half(char *str)
{
	int len;
	int i;

	len = 0;
	while (str[len])
	{
		len = len + 1;
	}

	if (len % 2 == 0)
	{
		i = len / 2;
	}
	else
	{
		i = len / 2 + 1;
	}

	while (i < len)
	{
		_putchar(str[i]);
		i = i + 1;
	}
	_putchar('\n');
}

#include "main.h"

/**
 * print_rev - print a string in reverse.
 * @s: string
 *
 * Description: print a string in reverse.
 */
void print_rev(char *s)
{
	int i;
	int len;

	len = _strlen(s);
	i = len - 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i = i - 1;
	}
	_putchar('\n');
}

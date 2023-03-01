#include "main.h"

/**
 * _puts - print a string
 * @str: string
 *
 * Description: print a string
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i = i + 1;
	}
	_putchar('\n');
}

#include "main.h"

/**
 * print_numbers - print number from 0-9.
 *
 * Description: print numbers from 0-9.
 */
void print_numbers(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		_putchar(i + '0');
		i = i + 1;
	}
	_putchar('\n');
}

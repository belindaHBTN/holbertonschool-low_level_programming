#include "main.h"

/**
 * print_line - print '_' n times
 * @n: number
 *
 * Description: print '_' n times.
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		i = 0;
		while (i < n)
		{
			_putchar('_');
			i = i + 1;
		}
		_putchar('\n');
	}
}

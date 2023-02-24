#include "main.h"

/**
 * print_triangle - print a triangle with #.
 * @size: number of lines
 *
 * Description: print a triangle with #.
 */
void print_triangle(int size)
{
	int i;
	int j;
	int k;

	i = 1;
	while (i <= size)
	{
		j = size - i;
		k = 1;
		while (k <= size)
		{
			if (k <= j)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
			k = k + 1;
		}
		_putchar('\n');
		i = i + 1;
	}
}

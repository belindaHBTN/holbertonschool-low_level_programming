#include "main.h"

/**
 * print_square - print a square
 * @size: number, square's side length
 *
 * Description: print a square with length of side = size
 */
void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		i = 0;
		while (i < size)
		{
			j = 0;
			while (j < size)
			{
				_putchar('#');
				j = j + 1;
			}
			_putchar('\n');
			i = i + 1;
		}
	}
}

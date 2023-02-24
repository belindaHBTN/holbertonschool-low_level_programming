#include "main.h"

/**
 * print_diagonal - print a diagonal line on the terminal
 * @n: number of diagonal lines
 *
 * Description: print a diagonal line on the terminal
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		i = 0;
		while (i < n)
		{
			j = 0;
			while (j <= i)
			{
				if (j < i)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('\\');
				}
				j = j + 1;
			}
			_putchar('\n');
			i = i + 1;
		}
	}
}

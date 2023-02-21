#include "main.h"

/**
 * print_alphabet_x10 - prints out a-z 10 times
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int i;
	int j;

	i = 1;
	while (i <= 10)
	{
		j = 97;
		while (j <= 122)
		{
			_putchar(j);
			j = j + 1;
		}
		_putchar('\n');
		i = i + 1;
	}
}

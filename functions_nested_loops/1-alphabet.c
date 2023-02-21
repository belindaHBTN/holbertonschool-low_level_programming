#include "main.h"

/**
 * main - Entryp point: print out a-z
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void);

void print_alphabet(void)
{
	int i = 97;
	while ( i <= 122)
	{
		_putchar(i);
		i = i + 1;
	}
	_putchar('\n');
}

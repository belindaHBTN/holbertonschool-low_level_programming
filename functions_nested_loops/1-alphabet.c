#include "main.h"

/**
 * main - Entryp point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void);

/**
 * main function here
 *
 */
	

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

#include "main.h"

/**
 * main - Entryp point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	const int words[8] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};

	i = 0;
	while (i < 8)
	{
		_putchar(words[i]);
		i = i + 1;
	}
	_putchar('\n');
	return (0);
}

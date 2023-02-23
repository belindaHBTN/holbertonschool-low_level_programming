#include "main.h"

/**
 * print_sign - print the sign of the input
 * @n: input, will be converted to ASCII number automatically
 *
 * Return: 1 if the input is larger than 0, 0 equal to  0, -1 less than 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

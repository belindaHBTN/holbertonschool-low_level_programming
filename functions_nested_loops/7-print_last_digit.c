#include "main.h"

/**
 * print_last_digit - print the last digit of a number.
 * @n: number
 *
 * Description: print the last digit of a number.
 * Return: the last digit value
 */
int print_last_digit(int n)
{
	int i;

	i = n % 10;
	if (i >= 0)
	{
		_putchar('0' + i);
		return (i);
	}
	else
	{
		_putchar('0' + (i * -1));
		return (-i);
	}
}

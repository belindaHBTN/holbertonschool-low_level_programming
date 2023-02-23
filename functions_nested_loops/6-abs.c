#include "main.h"

/**
 * _abs - print the absolute value of an integer.
 * @n: input integer
 *
 * Description: print the absolute value of an integer.
 * Return: the absolute value
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (-1 * n);
	}
}

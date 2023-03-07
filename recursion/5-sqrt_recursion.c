#include "main.h"

/**
 * _new_recursion - find the natrual sqaure root of a number
 * @i: the root of the integer
 * @n: the input integer
 *
 * Description: find the natrual square root of a number
 * Return: integer result (root).
 */
int _new_recursion(int i, int n)
{
	if (i % (n / i) == 0)
	{
		if (i * (n / i) == n)
		{
			return (i);
		}
		else
		{
			return (-1);
		}
	}
	else
	{
		return (_new_recursion(i + 1, n));
	}
}

/**
 * _sqrt_recursion - find the natural square root of a number.
 * @n: the input integer
 *
 * Description: find the natrual square root of a number
 * Return: integer result.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (_new_recursion(1, n));
	}
}

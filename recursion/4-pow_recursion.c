#include "main.h"

/**
 * _pow_recursion - find the value of x raised to the power of y
 * @x: integer base
 * @y: integer power
 *
 * Description: find the value of x raised to the power of y
 * Return: integer result.
 */
int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}

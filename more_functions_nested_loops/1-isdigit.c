#include "main.h"

/**
 * _isdigit - checks for the numbers.
 * @c: input a character or number
 *
 * Description:  checks for the numbers.
 * Return: 1 for number, 0 for others.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

#include "main.h"

/**
 * _isupper - checks for the uppercase characters.
 * @c: input cahracter
 *
 * Description:  checks for the uppercase characters.
 * Return: 1 for uppercase, 0 for others.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

#include "main.h"

/**
 * _islower - check if the input is a lowercase character
 * @c - input, will be converted to ASCII number automatically
 *
 * Return: 1 means lowercase alphabet, 0 means others
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

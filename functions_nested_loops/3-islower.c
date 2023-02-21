#include "main.h"

/**
 * _islower - check if the input is a lowercase character
 * @c: input, will be converted to ASCII number automatically
 *
 * Return: 1 if the input is a lowercase alphabet. 0 otherwise
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

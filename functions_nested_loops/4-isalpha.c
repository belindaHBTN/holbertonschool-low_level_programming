#include "main.h"

/**
 * _isalpha - check if the input is a letter
 * @c: input, will be converted to ASCII number automatically
 *
 * Return: 1 if the input is a letter. 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

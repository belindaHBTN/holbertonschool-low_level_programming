#include "main.h"

/**
 * check_prime - check if the input number is a prime number
 * @i: an integer
 * @n: an integer
 *
 * Description: check if the input number is a prime number.
 * Return: an integer
 */

int check_prime(int i, int n)
{
	if (n == i)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (check_prime(i + 1, n));
	}
}

/**
 * is_prime_number - check if the input number is a prime number
 * @n: an integer
 *
 * Description: check if the input number is a prime number.
 * Return: an integer
 */

int is_prime_number(int n)
{
	if (n <= 0 || n == 1)
	{
		return (0);
	}
	else
	{
	return (check_prime(2, n));
	}
}

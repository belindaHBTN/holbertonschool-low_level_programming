#include <stdio.h>

/**
 * main - Entry point
 * @n: number
 *
 * Description: find the largest prime factor of the input number.
 * Return: Always 0 (success)
 */
int main(void)
{
	long int n;
	int i;

	n = 612852475143;
	i = 2;
	while (n > 2)
	{
		if (n % i == 0)
		{
			n = n / i;
		}
		else
		{
			i = i + 1;
		}
	}
	printf("%d", i);
	return (0);
}

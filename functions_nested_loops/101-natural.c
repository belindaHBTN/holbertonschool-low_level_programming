#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: print the sum number.
 * Return: Always 0 (Success).
 */
int main(void)
{
	int sum;
	int num;

	sum = 0;
	num = 0;
	while (num >= 0 && num < 1024)
	{
		if (num % 3 == 0 || num % 5 == 0)
		{
			sum = sum + num;
		}
		num = num + 1;
	}
	printf("%d\n", sum);
	return (0);
}

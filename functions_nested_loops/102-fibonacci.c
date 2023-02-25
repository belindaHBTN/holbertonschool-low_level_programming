#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: print the first 50 Fibonacci numbers.
 * Return: Always 0 (Success).
 */
int main(void)
{
	long int a;
	long int b;
	long int c;
	long int i;

	a = 1;
	b = 2;
	i = 0;
	printf("%ld, %ld", a, b);
	while (i < 48)
	{
		c = a + b;
		printf(", %ld", c);
		a = b;
		b = c;
		i = i + 1;
	}
	printf("\n");
	return (0);
}

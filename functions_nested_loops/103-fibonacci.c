#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: print the sum of the even-valued Fibonacci numbers.
 * Return: Always 0 (Success).
 */
int main(void)
{
	long int a;
	long int b;
	long int c;
	long int i;
	long int tn;

	a = 1;
	b = 2;
	i = 0;
	tn = 2;
	while (i < 48)
	{
		c = a + b;
		if (c % 2 == 0 && c < 4000000)
		{
			tn = tn + c;
		}
		a = b;
		b = c;
		i = i + 1;
	}
	printf("%ld\n", tn);
	return (0);
}

#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the numbers from 1 to 100 with Fizz Buzz
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if (i == 1)
		{
			printf("%d", i);
		}
		else if (i % 3 == 0 && i % 5 != 0)
		{
			printf(" Fizz");
		}
		else if (i % 3 != 0 && i % 5 == 0)
		{
			printf(" Buzz");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else
		{
			printf(" %d", i);
		}
		i = i + 1;
	}
	printf("\n");
	return (0);
}

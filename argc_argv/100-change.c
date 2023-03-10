#include <stdio.h>
#include <stdlib.h>

/**
 * cents_check - check the minimum number
 * @amount: an amount of money.
 *
 * Description: check the minimum number
 * Return: the number.
 */
int cents_check(int amount)
{
	int count;
	int i;
	int arr[5] = {25, 10, 5, 2, 1};
	int a;
	int b;

	count = 0;
	i = 0;
	a = 0;
	b = 0;
	while (i < 5)
	{
		a = amount / arr[i];
		b = amount % arr[i];
		count = count + a;
		amount = b;
		i = i + 1;
	}
	return (count);
}

/**
 * main - print the minimum number of coins to make change
 * @argc: a count of the arguments passed to the program
 * @argv: an array of pointers to the strings which are those args
 *
 * Description: print the minimum number of coins to make change
 * Return: result or error.
 */
int main(int argc, char *argv[])
{
	int result;

	result = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (atoi(argv[1]) < 0)
	{
		printf("0\n");
	}
	else
	{
		result = cents_check(atoi(argv[1]));
		printf("%d\n", result);
	}

	return (0);
}

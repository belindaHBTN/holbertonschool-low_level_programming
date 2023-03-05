#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: an array.
 * @size: size of array, integer.
 *
 * Description: print the sum of the two diagnals
 */
void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int line1;
	int line2;
	int sum1;
	int sum2;

	i = 0;
	j = size - 1;
	line1 = 0;
	line2 = 0;
	sum1 = 0;
	sum2 = 0;
	while (i < size)
	{
		sum1 = sum1 + a[line1 * size + i];
		line1 = line1 + 1;
		i = i + 1;
	}
	while (j >= 0)
	{
		sum2 = sum2 + a[line2 * size + j];
		line2 = line2 + 1;
		j = j - 1;
	}

	printf("%d, %d\n", sum1, sum2);
}

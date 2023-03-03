#include "main.h"

/**
 * reverse_array - reverse the content of an array of integers.
 * @a: string
 * @n: size of integer
 *
 * Description: reverse the content of an array of integers.
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;
	int temp;

	i = 0;
	j = n - 1;
	temp = 0;
	while (i < j)
	{
		temp = *(a + i);
		*(a + i) = *(a + j);
		*(a + j) = temp;
		i = i + 1;
		j = j - 1;
	}
}

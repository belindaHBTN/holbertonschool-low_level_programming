#include "main.h"
#include <stdio.h>

/**
 * print_array - print the input array.
 * @a:pointer of an array
 * @n:number of elements in the array
 *
 * Description: print the input array.
 */
void print_array(int *a, int n)
{
	int i;
	int k;

	i = 0;
	k = 0;
	while (i < n)
	{
		if (k == 0)
		{
			printf("%d", a[i]);
			k = 1;
		}
		else
		{
			printf(", %d", a[i]);
		}
		i = i + 1;
	}
	printf("\n");
}

#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print number from n to 98
 * @n: the number user picked
 *
 * Description: print number from n to 98.
 * Return: no return.
 */
void print_to_98(int n)
{
	int k;

	k = 0;
	if (n > 98)
	{
		while (n >= 98)
		{
			if (k == 0)
			{
				printf("%d", n);
			}
			else
			{
				printf(", %d", n);
			}
			k = 1;
			n = n - 1;
		}
	}
	else if (n <= 98)
	{
		while (n <= 98)
		{
			if (k == 0)
			{
				printf("%d", n);
			}
			else
			{
				printf(", %d", n);
			}
			k = 1;
			n = n + 1;
		}
	}
	printf("\n");
}

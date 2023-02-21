#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;
	int k;

	i = 48;
	while (i <= 57)
	{
		j = 48;
		while (j <= 57)
		{
			k = 48;
			while (k <= 57)
			{
				if (i < j && j < k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i == j - 1 && j == k - 1 && k == 57)
					{
						putchar('\n');
						return (0);
					}
					putchar(44);
					putchar(32);
				}
				k++;
			}
			j++;
		}
		i++;
	}
	return (0);
}

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

	i = 0;
	k = 0;
	while (i <= 99)
	{
		j = 0;
		while (j <= 99)
		{
			if (i < j)
			{
				if (k > 0)
				{
					putchar(',');
					putchar(' ');
				}
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
				putchar((j / 10) + '0');
				putchar((j % 10) + '0');
				k = 1;
			}
			j = j + 1;
		}
		i = i + 1;
	}
	putchar('\n');
	return (0);
}

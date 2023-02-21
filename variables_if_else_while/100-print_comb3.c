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

	i = 48;
	while (i <= 57)
	{
		j = 48;
		while (j <= 57)
		{
			if (i < j)
			{
				putchar(i);
				putchar(j);
				if (i == 56 && j == 57)
				{
					putchar('\n');
					return (0);
				}
				putchar(44);
				putchar(32);
			}
			j = j + 1;
		}
		i = i + 1;
	}
	return (0);
}

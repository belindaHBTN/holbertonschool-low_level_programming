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
	while (i < 57)
	{
		j = i + 1;
		while (j <= 57)
		{
			putchar(i);
			putchar(j);
			if (i != 56)
			{
				putchar(44);
				putchar(32);
			}
			else
			{
				putchar('\n');
			}
			j++;
		}
		i++;
	}
	return (0);
}

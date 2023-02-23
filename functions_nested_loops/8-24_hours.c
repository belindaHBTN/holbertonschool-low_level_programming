#include "main.h"

/**
 * jack_bauer - prints every minute of the day.
 *
 * Description: prints every minute of the day.
 * Return: none
 */
void jack_bauer(void)
{
	int i;
	int j;
	int k;
	int l;

	i = 0;
	while (i <= 2)
	{
		j = 0;
		while (j <= 9)
		{
			k = 0;
			while (k <= 5)
			{
				l = 0;
				while (l <= 9)
				{
					if (i == 2 && j > 3)
					{
						break;
					}
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar(':');
					_putchar(k + '0');
					_putchar(l + '0');
					_putchar('\n');
					l = l + 1;
				}
				k = k + 1;
			}
			j = j + 1;
		}
		i = i + 1;
	}
}

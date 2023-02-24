#include "main.h"

/**
 * more_numbers - print number from 0-14 10 times.
 *
 * Description: print numbers from 0-9 10 times.
 */
void more_numbers(void)
{
	int n;
	int l;

	l = 0;
	while (l < 10)
	{
		n = 0;
		while (n <= 14)
		{
			if (n > 9 && n <= 14)
			{
				_putchar((n / 10) + '0');
			}
			_putchar((n % 10) + '0');
			n = n + 1;
		}
		_putchar('\n');
		l = l + 1;
	}
}

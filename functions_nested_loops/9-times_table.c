#include "main.h"

/**
 * times_table - prints the 9 times table.
 *
 * Description: prints the 9 times table.
 * Return: none
 */
void times_table(void)
{
	int line_num;
	int num;
	int total_num;

	line_num = 0;
	while (line_num <= 9)
	{
		num = 0;
		while (num <= 9)
		{
			total_num = line_num * num;
			if (total_num < 10)
			{
				_putchar(' ');
				_putchar(total_num + '0');
			}
			else
			{
				_putchar((total_num / 10) + '0');
				_putchar((total_num % 10) + '0');
			}
			if (num < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			num = num + 1;
		}
		_putchar('\n');
		line_num = line_num + 1;
	}
}

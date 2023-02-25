#include "main.h"

/**
 * times_table - prints the n times table.
 * @n: number
 *
 * Description: prints the n times table.
 * Return: none
 */
void print_times_table(int n)
{
	int line_num;
	int num;
	int total_num;

	if (n > 15 || n < 0)
	{
		_putchar('\n');
	}
	else if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		line_num = 0;
		while (line_num <= n)
		{
			num = 0;
			while (num <= n)
			{
				total_num = line_num * num;
				if (num == 0)
				{
					_putchar('0');
				}
				else if (total_num >= 0 && total_num <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(total_num + '0');
				}
				else if (total_num >= 10 && total_num <= 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((total_num / 10) + '0');
					_putchar((total_num % 10) + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar((total_num / 100) + '0');
					_putchar((total_num / 10 % 10) +'0');
					_putchar((total_num % 100 % 10) + '0');
				}
				num = num + 1;
			}
			line_num = line_num + 1;
			_putchar('\n');
		}
	}
}

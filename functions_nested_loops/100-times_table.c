#include "main.h"

/**
 * print_times_table - prints the n times table.
 * @n: number
 *
 * Description: prints the n times table.
 * Return: none
 */
void print_times_table(int n)
{
	int line_num;
	int num;
	int tn;

	if (n == 0)
	{
		_putchar('0');
		_putchar('\n');
	}
	else if (n > 0 && n <= 15)
	{
		line_num = 0;
		while (line_num <= n)
		{
			num = 0;
			while (num <= n)
			{
				tn = line_num * num;
				if (num == 0)
				{
					_putchar('0');
				}
				else if (tn >= 0 && tn <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(tn + '0');
				}
				else if (tn >= 10 && tn <= 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((tn / 10) + '0');
					_putchar((tn % 10) + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar((tn / 100) + '0');
					_putchar((tn / 10 % 10) + '0');
					_putchar((tn % 100 % 10) + '0');
				}
				num = num + 1;
			}
			line_num = line_num + 1;
			_putchar('\n');
		}
	}
}

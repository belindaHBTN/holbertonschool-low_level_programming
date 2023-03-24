#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - calculate the total of all arguments
 * @n: the number of arguments
 *
 * Description: calculate the total of all arguments
 * Return: result (integer)
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list argp;
	unsigned int i;

	va_start(argp, n);

	i = 0;
	while (i < n)
	{
		printf("%d
	}
}

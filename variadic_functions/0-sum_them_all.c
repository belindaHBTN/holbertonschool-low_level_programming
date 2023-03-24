#include <stdarg.h>

/**
 * sum_them_all - calculate the total of all arguments
 * @n: the number of arguments
 *
 * Description: calculate the total of all arguments
 * Return: result (integer)
 */

int sum_them_all(const unsigned int n, ...)
{
	int result;
	unsigned int i;
	int temp;
	va_list argp;

	if (n == 0)
	{
		return (0);
	}

	va_start(argp, n);
	i = 0;
	while (i < n)
	{
		temp = va_arg(argp, int);
		result = result + temp;
		i = i + 1;
	}
	va_end(argp);
	return (result);
}

#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print all arguments
 * @separator: string between every argument
 * @n: the number of arguments
 *
 * Description: print all argumnets
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list argp;
	unsigned int i;

	va_start(argp, n);

	i = 0;
	while (i < n)
	{
		if (i == 0)
		{
			printf("%d", va_arg(argp, int));
		}
		else
		{
			if (separator == NULL)
			{
				printf("%d", va_arg(argp, int));
			}
			else
			{
				printf("%s", separator);
				printf("%d", va_arg(argp, int));
			}
		}

			i = i + 1;
	}
	printf("\n");
}

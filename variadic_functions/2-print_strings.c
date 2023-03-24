#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print argument (string)
 * @separator: the string between arguments
 * @n: the number of arguments
 *
 * Description: print arguments
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list argp;
	unsigned int i;
	char *new_str;

	va_start(argp, n);
	new_str = NULL;
	i = 0;
	while (i < n)
	{
		new_str = va_arg(argp, char *);
		if (i == 0)
		{
			printf("%s", new_str);
		}
		else
		{
			if (separator != NULL && new_str != NULL)
			{
				printf("%s", separator);
				printf("%s", new_str);
			}
			else
			{
				if (separator == NULL)
				{
					printf("%s", new_str);
				}
				if (new_str == NULL)
				{
					printf("%s", separator);
					printf("(nil)");
				}
			}
		}
		i = i + 1;
	}
	printf("\n");
	va_end(argp);
}

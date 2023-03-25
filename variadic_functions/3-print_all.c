#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - print anything
 * @format: a list of types of arguments
 *
 * Description: print anything
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	int i = 0, j = 0;
	char *s;
	va_list argp;

	va_start(argp, format);
	while ((format != NULL) && (format[i] != '\0'))
	{
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f'
		 || format[i] == 's') && (j > 0))
			printf(", ");
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(argp, int));
				j = j + 1;
				break;
			case 'i':
				printf("%d", va_arg(argp, int));
				j = j + 1;
				break;
			case 'f':
				printf("%f", va_arg(argp, double));
				j = j + 1;
				break;
			case 's':
				s = va_arg(argp, char *);
				if (s == NULL)
				{
					printf("(nil)");
					j = j + 1;
					break;
				}
				printf("%s", s);
				j = j + 1;
				break;
		}
		i = i + 1;
	}
	printf("\n");
	va_end(argp);
}

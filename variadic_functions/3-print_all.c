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

void print_all(const char * const format, ...)
{
    
    int i = 0;
    va_list argp; 

    va_start(argp, format);
    
    while(format[i] != '\0')
    {
        if (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's') 
        {
            if (format[i] == 'c')
            {
                printf("%c\n", va_arg(argp, int));
            }
            if (format[i] == 'i')
            {
                printf("%d\n", va_arg(argp, int));
            }
            if (format[i] == 'f')
            {
                printf("%f\n", va_arg(argp, double));
            }
            if (format[i] == 's')
            {
                printf("%s\n", va_arg(argp, char*));
            }
        }
        i++;
    }
}

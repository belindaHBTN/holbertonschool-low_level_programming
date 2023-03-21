#include <stdio.h>

/**
 * print_name - call a function to print a name
 * @name: name of the person
 * @f: the pointer to the call back function
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		f(name);
	}
}

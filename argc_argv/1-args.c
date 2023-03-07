#include <stdio.h>

/**
 * main - print the number of arguments passed into it.
 * @argc: a count of the arguments passed to the program
 * @argv: an array of pointers to the strings which are those args
 *
 * Description: print the number of arguments passed into it.
 * Return: Always be 0.
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", (argc - 1));
	return (0);
}

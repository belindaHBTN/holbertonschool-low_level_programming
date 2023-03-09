#include <stdio.h>

/**
 * main - print the name of the program
 * @argc: a count of the arguments passed to the program
 * @argv: an array of pointers to the strings which are those args
 *
 * Description: print the name of the program
 * Return: Always be 0.
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}

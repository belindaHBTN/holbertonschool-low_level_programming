#include <stdio.h>
#include <stdlib.h>

/**
 * main - print all arguments it receives
 * @argc: a count of the arguments passed to the program
 * @argv: an array of pointers to the strings which are those args
 *
 * Description: print all arguments it receives
 * Return: Always be 0.
 */

int main(int argc, char *argv[])
{
	int result;

	(void)argc;
	if (argv[1] == NULL || argv[2] == NULL)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
		return (0);
	}
}

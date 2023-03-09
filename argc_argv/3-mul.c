#include <stdio.h>
#include <stdlib.h>

/**
 * main - mutiplies two numbers
 * @argc: a count of the arguments passed to the program
 * @argv: an array of pointers to the strings which are those args
 *
 * Description: mutiplies two numbers
 * Return: result or error.
 */

int main(int argc, char *argv[])
{
	int result;

	if (argc != 3)
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

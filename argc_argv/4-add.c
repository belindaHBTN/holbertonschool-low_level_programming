#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int check_num(char *str)
{
	int j;

	j = 0;
	while (str[j] != '\0')
	{
		if (isdigit(str[j]) == 0)
		{
			return (1);
		}
		j = j + 1;
	}
	return (0);
}

/**
 * main - add positive numbers
 * @argc: a count of the arguments passed to the program
 * @argv: an array of pointers to the strings which are those args
 *
 * Description: add positive numbers.
 * Return: Always be 0.
 */



int main(int argc, char *argv[])
{
	int result;
	int i;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		i = 1;
		result = 0;
		while (i < argc)
		{
			if (check_num(argv[i]) == 1)
			{
				printf("Error\n");
				return (1);
			}
			result = result + atoi(argv[i]);
			i = i + 1;
		}
		printf("%d\n", result);
	}
	return (0);
}

#include "main.h"

/**
 * _atoi - convert string to number
 * @s: pointer to an char array.
 *
 * Description: convert a string to number..
 * Return: integer.
 */
int _atoi(char *s)
{
	int isPositive = 1;
	int isNumberStarted = 0;
	int currentNumber = 0;
	int i = 0;
	int n;

	while (s[i] != '\0')
	{
		if (isNumberStarted == 0)
		{
			if (s[i] == '-')
			{
				isPositive = isPositive * -1;
			}
			else if (s[i] >= '0' && s[i] <= '9')
			{
				isNumberStarted = 1;
				currentNumber = s[i] - '0';
				currentNumber = currentNumber * isPositive;
			}
		}
		else
		{
			if (s[i] >= '0' && s[i] <= '9')
			{
				n = s[i] - '0';
				currentNumber = currentNumber * 10 + (n * isPositive);
			}
			else
			{
				break;
			}
		}
		i = i + 1;
	}
	return (currentNumber);
}

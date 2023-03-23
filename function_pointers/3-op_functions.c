#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - add two integers together
 * @a: the first integer
 * @b: the second integer
 *
 * Description: add two integers together
 * Return: an integer
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substract two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Description: substract two integers
 * Return: an integer
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiple two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Description: multiple two integers
 * Return: an integer
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - one integer divided by the other
 * @a: the first integer
 * @b: the second integer
 *
 * Description: one integer divided by the other
 * Return: an integer
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - one integer modulo by the other
 * @a: the first integer
 * @b: the second integer
 *
 * Description: one integer modulo by the other
 * Return: an integer
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

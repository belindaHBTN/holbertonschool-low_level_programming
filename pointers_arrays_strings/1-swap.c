#include "main.h"

/**
 * swap_int - swap the value of a and b
 * @a: pointer a
 * @b: pointer b
 *
 * Description: swap the value of a and b
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

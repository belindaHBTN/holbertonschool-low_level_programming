#include <stddef.h>
#include <stdio.h>

/**
 * array_iterator - execute a function for each element of an array.
 * @array: elements
 * @size: the size of the array
 * @action: the function need to be executed
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		i = 0;
		while (i < size)
		{
			action(array[i]);
			i = i + 1;
		}
	}
}

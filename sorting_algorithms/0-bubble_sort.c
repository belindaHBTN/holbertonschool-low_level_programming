#include "sort.h"

/**
 * bubble_sort - a function that sorts an array of integers in ascending order
 * using the Bubble sort algorithm
 * @array: the pointer to the array that need to be sorted
 * @size: number of elements in the array
 *
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i = 0;
	size_t j;
	int tmp;

	while (i < size)
	{
		j = 0;
		while (j < (size - 1))
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
			}
			j = j + 1;
		}
		i = i + 1;
	}
}

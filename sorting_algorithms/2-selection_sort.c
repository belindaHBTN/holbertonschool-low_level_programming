#include "sort.h"

/**
 * selection_sort - a function that sorts an array of integers in ascending order
 * using the selection sort algorithm
 * @array: the pointer to the array that need to be sorted
 * @size: number of elements in the array
 *
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t i;
	size_t j;
	int sm;
	int sm_index;
	int tmp;

	i = 0;
	while (i < size)
	{
		sm = array[i];
		j = i + 1;
		while (j < size)
		{
			if (sm > array[j])
			{
				sm = array[j];
				sm_index = j;
			}
			j = j + 1;
		}
		tmp = array[i];
		array[i] = sm;
		array[sm_index] = tmp;
		print_array(array, size);
		i = i + 1;
	}
}

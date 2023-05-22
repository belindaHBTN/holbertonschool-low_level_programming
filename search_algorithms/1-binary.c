#include "search_algos.h"

/**
 * print_array - print the array
 * @array: a pointer to the first element of the array to search in.
 * @low: the index of the lower number
 * @high: the index of the highest number
 *
 * Return: nothing
 */
void print_array(int *array, size_t low, size_t high)
{
	printf("Searching in array: ");
	while (low < high)
	{
		printf("%d, ", array[low]);
		low = low + 1;
	}
	if (low == high)
	{
		printf("%d\n", array[low]);
	}
}

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: a pointer to the first element of the array to search in.
 * @size: number of elements in array.
 * @value: the value to search for.
 *
 * Return: the index of the value
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low;
	size_t high;
	size_t mid;

	if (!value || !array)
	{
		return (-1);
	}

	low = 0;
	high = size - 1;
	while (low <= high)
	{
		print_array(array, low, high);
		mid = (low + high) / 2;
		if (array[mid] == value)
		{
			return ((int)mid);
		}
		else if (array[mid] > value)
		{
			high = mid - 1;
		}
		else
		{
			low = mid + 1;
		}
	}

	return (-1);
}


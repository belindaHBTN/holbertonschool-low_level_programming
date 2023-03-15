#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocate memory for a 2 dimensional array, then initialized it.
 * @width: input integer, colunms
 * @height: input integer, lines
 *
 * Description: allocate memory for a 2 dimensional array, then initialized it.
 * Return: a pointer to a dimensional array, or NULL if it fails
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j, k;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = (int **)malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	i = 0;
	while (i < height)
	{
		grid[i] = (int *)malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			while (i >= 0)
			{
				free(grid[i]);
				i = i - 1;
			}
			free(grid);
			return (NULL);
		}
		i = i + 1;
	}
	j = 0;
	while (j < height)
	{
		k = 0;
		while (k < width)
		{
			grid[j][k] = 0;
			k = k + 1;
		}
		j = j + 1;
	}
	return (grid);
}

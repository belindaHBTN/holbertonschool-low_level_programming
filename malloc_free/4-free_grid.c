#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free memory that were allocated.
 * @grid: the pointer of pointer, input
 * @height: integer, input
 *
 * Description: free memory that were allocated.
 * Return: nothing.
 */
void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	while (i < height)
	{
		free(grid[i]);
		i = i + 1;
	}
	free(grid);
}

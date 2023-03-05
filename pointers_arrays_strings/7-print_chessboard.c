#include "main.h"

/**
 * print_chessboard - prints the chessboard.
 * @a: a multi-dimensional arrays.
 *
 * Description: prints the chessboard.
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	i = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			_putchar (a[i][j]);
			j = j + 1;
		}
		i = i + 1;
		_putchar ('\n');
	}
}

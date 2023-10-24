#include "main.h"
/**
 * print_chessboard - print a 2D array
 * @a: pointer to colume
 */

void print_chessboard(char (*a)[8])
{
	int i, j; /* Array row and columm */

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}

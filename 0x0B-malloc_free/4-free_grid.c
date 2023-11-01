#include <stdlib.h>

/**
 * free_grid - free grid
 * @grid: grid
 * @height: grid height
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL)
	{
		/* Free each row first */
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}

		/* Free the array of pointers (the grid itself) */
		free(grid);
	}
}


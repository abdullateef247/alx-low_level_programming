#include <stdlib.h>

/**
 * alloc_grid - creates 2 dimensional array of integers
 * @width: width of 2d array
 * @height: heigth of 2d array
 *
 * Return: pointer to 2d array or null
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	/* Check for invalid dimensions */
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	/* Allocate memory for the array of int pointers */
	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);  /* Memory allocation failed */
	}

	/* Allocate memory for each row (array of ints) and initialize to 0 */
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			/* Mem alloc failed for a row,  free the previous rows and return NULL */
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}

		/* Initialize each element in the row to 0 */
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}

#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diagonals of a square matrix
 * @a: pointer to a square matrix of int
 * @size: number is row/columm
 */

void print_diagsums(int *a, int size)
{
	int sum_primary = 0;
	int sum_secondary = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		/* Sum the elements on the primary diagonal (i, i) */
		sum_primary += a[i * size + i];

		/* Sum the elements on the secondary diagonal (i, size - 1 - i) */
		sum_secondary += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", sum_primary, sum_secondary);
}

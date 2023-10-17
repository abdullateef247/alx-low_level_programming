#include "main.h"
#include  <stdio.h>

/**
 * print_array - print elements of an array
 * @a: arrray
 * @n: number of elements
 *
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (i > 0)
		{
			printf(", ");
		}
		printf("%d", a[i]);
	}
	printf("\n");

}

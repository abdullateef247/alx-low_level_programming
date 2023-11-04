#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Create an array of integers with values
 * ranging from min to max.
 * @min: The minimum value (inclusive).
 * @max: The maximum value (inclusive).
 *
 * Return: A pointer to the newly created array, or NULL on failure.
 */

int *array_range(int min, int max)
{
	int size, *ptr;
	int i;

	if (min > max)
	{
		return (NULL); /* special case */
	}
	size = (max - min) + 1;

	ptr = (int *)malloc(size * sizeof(int));

	if (ptr == NULL)
	{
		return (NULL); /* memory allocation failed*/
	}
	/* nitialize the array with values ranging from min to max */
	for (i = 0; i < size; i++)
	{
		ptr[i] = min + i;
	}

	return (ptr);
}

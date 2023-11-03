#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes
 *
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98); /* mem allocation failed*/
	}
	return (ptr);
}

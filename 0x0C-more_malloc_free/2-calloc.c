#include <string.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array and initializes it to zero
 * @nmemb: number of elements of the array
 * @size: size of each element in the array
 *
 * Return: a pointer to the memory lcation allocated or NULL for failure
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total_size;
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL); /* special case */

	}
	total_size = nmemb * size;

	ptr = malloc(total_size);
	if (ptr == NULL)
	{
		return (NULL); /* memory allocation failed */
	}
	memset(ptr, 0, size); /* set memory allocated to zero*/

	return (ptr);
}

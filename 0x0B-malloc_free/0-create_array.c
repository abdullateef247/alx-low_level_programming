#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates an array of a particullar character
 * @size: array size
 * @c: character
 *
 * Return: a character
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
	{
		printf("error aloacting memory\n");
		return (NULL);
	}

	ptr = (char *)malloc(size * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
	free(ptr);
}

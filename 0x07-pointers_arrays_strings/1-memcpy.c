#include <string.h>

/**
 * _memcpy - copies n bytes from memory area src to dest
 * @dest: destination
 * @src: memory area / source
 * @n: number of bytes
 *
 * Return: a pointer to destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *ptr = dest; /* pointer to destination */

	for (i = 0; i < n; i++)
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	return (dest);
}

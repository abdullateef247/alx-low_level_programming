#include "string.h"

/**
 * _memset - fill memory with constant bytes
 * @s: pointer
 * @b: character to fill memory with
 * @n: number of bytes
 *
 * Returns: a pointer to memory address
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*ptr = b;
		ptr++;
	}
	return (s);

}

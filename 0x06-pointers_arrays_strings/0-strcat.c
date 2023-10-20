#include <string.h>

/**
 * _strcat - concatenate two strings
 * @dest: Destination string
 * @src: source sring
 *
 * Return: A character
 */

char *_strcat(char *dest, char *src)
{
	char *original_dest = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (original_dest);
}

#include <stddef.h>
/**
 * _strpbrk - search a string for any of a set of bytes
 * @s: string
 * @accept: charater(s) to be checked for in s
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*a == *s)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (NULL);
}

#include <stdlib.h>
#include <string.h>

/**
 * _strdup - make pointer to a newly allocated space in memory
 * @str: string
 *
 * Return: pointer on succes or null
 */

char *_strdup(char *str)
{
	int i, n;
	char *ptr_s;

	if (str == NULL)
	{
		return (NULL); /* no argument supplied */
	}

	n = strlen(str); /* counter in loop */
	ptr_s = malloc((n - 1) * sizeof(char));

	if (ptr_s == NULL)
	{
		return (NULL); /* Error allocating memory*/
	}
	for (i = 0; i <= n; i++)
	{
		ptr_s[i] = str[i];
	}
	return (ptr_s);
}

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
	int i, length;
	char *ptr_s;

	if (str == NULL)
	{
		return (NULL); /* no argument supplied */
	}

	length = 0; /* counter in loop */
	while (str[length] != '\0')
	{
		length++;
	}
	ptr_s = (char *)malloc((length + 1) * sizeof(char));

	if (ptr_s == NULL)
	{
		return (NULL); /* Error allocating memory*/
	}
	for (i = 0; i <= length; i++)
	{
		ptr_s[i] = str[i];
	}
	return (ptr_s);
}

#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings.
 * @s1: destination string
 * @s2: source string
 *
 * Return: pointer to a new memory location or null
 */

char *str_concat(char *s1, char *s2)
{
	int total_length;
	char *ptr_concat;

	if (s1 == NULL)
	{
		s1 = ""; /* empty string */
	}
	if (s2 == NULL)
	{
		s2 = ""; /* empty string */
	}

	total_length = strlen(s1) + strlen(s2);
	ptr_concat = (char *)malloc((total_length + 1) * sizeof(char));

	if (ptr_concat == NULL)
	{
		return (NULL); /* Mem alocation failed*/
	}

	strcpy(ptr_concat, s1); /* copy content of s1 to new mem location*/
	strcat(ptr_concat, s2); /* append content of s2 */
	return (ptr_concat);
}

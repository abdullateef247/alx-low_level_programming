#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings with n bytes of the second string
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 *
 * Return: pointer to new memory location or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result, *temp;
	unsigned int len1 = 0, len2 = 0, total_len = 0;

	if (s1 == NULL) /* Handle NULL strings */
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len1]) /* Calculate the length of s1 */
	{
		len1++;
	}
	while (s2[len2]) /* Calculate the length of s1 */
	{
		len2++;
	}
	if (n >= len2) /* Determine the  number of bytes to concatenate from s2 */
	{
		n = len2;
	}
	total_len = len1 + n; /* Calculate the total length of the result string */
	result = malloc(total_len + 1); /* Allocate memory for the result string */
	if (result == NULL)
	{
		return (NULL);
	}
	temp = result; /*copy first string s1*/
	while (*s1)
	{
		*temp = *s1;
		temp++;
		s1++;
	}

	while (n > 0)
	{ /* copy first n bytes */
		*temp = *s2;
		temp++;
		s2++;
		n--;
	}
	*temp = '\0';
	return (result);
}

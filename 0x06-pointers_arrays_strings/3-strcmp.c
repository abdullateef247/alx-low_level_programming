/**
 * _strcmp - compares two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: An integer
 */

int _strcmp(char *s1, char *s2)
{
	/* Iterate through the values of s1 and s2 */
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 < *s2)
		{
			return (-(*s2 - *s1));
		}
		else if (*s1 > *s2)
		{
			return ((*s1 - *s2));
		}
		s1++;
		s2++;
	}
	return (0); /* Both strings are equal */
}

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to string
 * @accept: character(s) to be checked
 *
 * Return: number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				count++;
				break; /* out of the inner loop*/
			}
			a++; /* move the the net character in accept */
		}
		if (*a == '\0')
		{
			break; /* out of the outer loop */
		}
		s++;
	}
	return (count);
}

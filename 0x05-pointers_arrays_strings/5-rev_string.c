#include <string.h>
#include <stdio.h>
/**
 * rev_string - reverse string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	int i = 0;
	int len = strlen(s);
	char temp;

	while (s[i] != '\n' && i < len / 2)
	{
		/* swap values */
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
		i++;
	}
}

/**
 * _strncpy - copy sting from source to destination
 * @dest: copy destination
 * @src: copy source
 *
 * return: characters
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *original_dest = dest;

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	if (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}

	return (original_dest);
}

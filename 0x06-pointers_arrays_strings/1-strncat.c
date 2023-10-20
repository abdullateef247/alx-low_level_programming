/**
 * _strncat - concatenate strings till number of bytes specified
 * @dest: Destination string
 * @src: Source string
 * @n: Number of bytes
 *
 * Return: charater sting
 */

char *_strncat(char *dest, char *src, int n)
{
	char *original_dest = dest;
	/* Move to the end of dest */
	while (*dest != '\0')
	{
		dest++;
	}
	/* Copy n number of bytes from src*/
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return (original_dest);
}

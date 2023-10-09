#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always return 0 success
 */
int main(void)
{
	char n = 'a';

	while (n <= 'z')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}

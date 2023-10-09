#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: return 0 success
 */
int main(void)
{
	int n = 'a';

	for (n = 'a'; n <= 'z'; n++)
	{
		putchar(n);
	}
	for (n = 'A'; n <= 'Z'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
 * main - print the name of the file it was compiled from,
 * followed by a new line
 *
 * Return: zero success , or 1 failure
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}

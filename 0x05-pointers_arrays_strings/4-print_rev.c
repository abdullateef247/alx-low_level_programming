#include "main.h"
#include <string.h>
/**
 * print_rev - print reverse
 * @s: string
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	int i;
	int len = strlen(s);

	for (i = len - 1; s[i] != '\0'; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

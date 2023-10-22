#include "main.h"

/**
 * _puts - write string to standard output
 * @str: string to write
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

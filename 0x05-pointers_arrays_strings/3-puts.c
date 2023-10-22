#include "main.h"

/**
 * _puts - put string
 * @str: string to copy
 *
 * Return: nothing
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		str++;
	}
	_putchar('\n');
}

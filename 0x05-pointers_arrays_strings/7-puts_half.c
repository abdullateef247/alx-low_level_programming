#include "main.h"
#include <string.h>

/**
 * puts_half - print half of a string
 * @str: string
 */

void puts_half(char *str)
{
	int len = (strlen(str));
	int i, n;

	if (len % 2 == 0)
	{
		n = len / 2;
	}
	else
	{
		n = (len - 1) / 2;
	}
	for (i = n; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

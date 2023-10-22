#include "main.h"
#include <string.h>

/**
 * puts_half - print half of a string
 * @str: string
 */

void puts_half(char *str)
{
	int len = (strlen(str));
	int i;

	for (i = len / 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

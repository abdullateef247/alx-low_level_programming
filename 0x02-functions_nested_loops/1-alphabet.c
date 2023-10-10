#include "main.h"
/**
 * print_alphabet - write alphabet a - z to standard ouput
 *
 * Return: void.
 */
void print_alphabet(void)
{
	char n = 'a';

	while (n <= 'z')
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}

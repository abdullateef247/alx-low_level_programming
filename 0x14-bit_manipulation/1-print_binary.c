#include "main.h"
#include <unistd.h>

/**
 * print_binary_recursive - prints binary representation of numbers recursively
 * @n: number
 */

void print_binary_recursive(unsigned long int n)
{
	if (n > 1)
	{
		/* Right shift n by 1 (equivalent to n / 2) */
		print_binary_recursive(n >> 1);
	}
	/* Print the least significant bit */
	_putchar((n & 1) + '0');
}
/**
 * print_binary - prints the binary representation of a number.
 * @n: number
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		/* Special case: If n is 0, print '0' */
		_putchar('0');
	}
	else
	{
		print_binary_recursive(n);
	}
}

#include "main.h"

/**
 * swap_int - swaps value of two integers
 * @a: value to be swaped
 * @b: another value to be swaped
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;

}

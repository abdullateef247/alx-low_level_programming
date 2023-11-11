#include <stdarg.h>

/**
 * sum_them_all -  returns the sum of all its parameters
 * @n: first argument
 * @...: more arguments
 *
 * Return: sum of parameters on success, or 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;

	if (n == 0)
	{
		return (0);
	}
	else
	{
		va_list args;

		va_start(args, n);

		for (i = 0; i < n; i++)
		{
			sum += va_arg(args, int);
		}
		va_end(args);

	}
	return (sum);

}

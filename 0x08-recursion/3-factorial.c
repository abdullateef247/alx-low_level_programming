/**
 * factorial - computes the factorial of a given number
 * @n: number
 *
 * Return: integer numbe
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1); /* base case : factorial of zero is one */
	}
	if (n < 0)
	{
		return (-1); /* Error */
	}
	return (n * factorial(n - 1));
}

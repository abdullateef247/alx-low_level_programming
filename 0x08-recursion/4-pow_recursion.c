/**
 * _pow_recursion - calculates the value of x raised to the power of y
 * @x: number
 * @y: exponent
 *
 * Return: integer number
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1); /* Base case: any num to the pow of zero is 1 */
	}
	if (y < 0)
	{
		return (-1); /* Error */
	}
	return (x * _pow_recursion(x, y - 1));
}

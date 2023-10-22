/**
 * reverse_array - Reverse the elements of an array
 * @a: Name of the array
 * @n: Number of elements of the array
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int start = 0; /* begining of the array */
	int end = n - 1; /* end of the array */
	int temp; /* hold temporary vales*/

	while (start < end)
	{
		/* swap begining and end values */
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		end--;
		start++;
	}
}

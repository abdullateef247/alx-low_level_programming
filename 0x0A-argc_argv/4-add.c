#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * is_valid_positive_number - checks if an argument id a valide positive number
 * @arg: argument to check
 *
 * Return: 1 sucess or zero failiure
 */

int is_valid_positive_number(const char *arg)
{
	int i;

	for (i = 0; arg[i] != '\0'; i++)
	{
		if (!isdigit(arg[i]))
		{
			return (0); /* Argument contains non-digit character */
		}
	}
	return (1); /* Argument is a valid positive number */
}

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: pointer to string
 *
 * Return: 0 success or -1 fail
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i, number;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (is_valid_positive_number(argv[i]))
		{
			number = atoi(argv[i]);
			if (number > 0 && sum > INT_MAX - number) /* Check for integer overflow */
			{
				printf("Error\n");
				return (1);
			}
			sum += number;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}

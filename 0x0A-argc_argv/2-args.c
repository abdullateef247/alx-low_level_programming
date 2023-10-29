#include <stdio.h>

/**
 * main - print all arguments it receives
 * @argc: argument count
 * @argv: pointer to string
 *
 * Return: 0 on success or  -1 error
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}

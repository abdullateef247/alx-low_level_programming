#include <stdio.h>

/**
 * main - print program name, followed by a new line
 * @argc: count number of parameters
 * @argv: pointer to a string
 *
 * Return: 0 on success or -1 error
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	else
	{
		printf("Unable to determine the program name.\n");
	}
	return (0);
}



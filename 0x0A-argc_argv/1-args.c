#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: count argument
 * @argv: pointer to string
 *
 * Return: 0 on success or -1 error
 */

int main(int argc, __attribute__((unused))char *argv[])
{

	printf("%d\n", argc - 1);
	return (0);
}

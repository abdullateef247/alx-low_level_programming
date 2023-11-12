#include <stdio.h>
#include <stdarg.h>

/**
 * print_char - print character
 * @args: argument
 */

void print_char(va_list args)
{
	char c_args;

	c_args = va_arg(args, int);
	printf("%c", c_args);
}

/**
 * print_int - print integer
 * @args: argument
 */

void print_int(va_list args)
{
	int i_args;

	i_args = va_arg(args, int);
	printf("%i", i_args);
}

/**
 * print_float - prints float
 * @args: argument
 */

void print_float(va_list args)
{
	double f_args;

	f_args = va_arg(args, double);
	printf("%f", f_args);
}

/**
 * print_string - print string
 * @args: argument
 */

void print_string(va_list args)
{
	char *s_args;

	s_args = va_arg(args, char *);
	if (s_args == NULL)
	{
		printf("nil");
	}
	printf("%s", s_args);
}

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 * @...: variable argument
 */

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				print_char(args);
				break;
			case 'i':
				print_int(args);
				break;
			case 'f':
				print_float(args);
				break;
			case 's':
				print_string(args);
				break;
			default:
				break;
		}
		if (format[i + 1] && (format[i + 1] == 'c' || format[i + 1] == 's'
		|| format[i + 1] == 'f' || format[i + 1] == 'i'))
		{
			printf(", ");
		}

		i++;
	}
	va_end(args);
	printf("\n");
}

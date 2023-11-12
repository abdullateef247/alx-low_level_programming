#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 * @...: variable argument
 */

void print_all(const char * const format, ...)
{
	va_list args;
	char c_args;
	int i_args;
	float f_args;
	char *s_args;
	unsigned int i = 0;

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				c_args = va_arg(args, int);
				printf("%c", c_args);
				break;
			case 'i':
				i_args = va_arg(args, int);
				printf("%i", i_args);
				break;
			case 'f':
				f_args = va_arg(args, double);
				printf("%f", f_args);
				break;
			case 's':
				s_args = va_arg(args, char *);
				if (s_args == NULL)
				{
					printf("nil");
				}
				printf("%s", s_args);
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

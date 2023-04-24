#include "main.h"

/**
 * _printf - prints anything
 * @format: list of types of arguments
 * passed to the function
 * @...: arguments to be printed
 * Return: void
 */
#define COUNTC do { \
	(count) += (print_char((va_arg((args), (int))))); \
	(break); \
} while (0)
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0, i;

	va_start(args, format);
	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			count += print_char(format[i]);
			continue;
		}
		switch (format[i + 1])
		{
		case 'c':
			COUNTC;
		case '%':
			count += print_char('%');
			break;
		case 's':
			count += print_str(va_arg(args, char *));
			break;
		case 'i':
		case 'd':
			count += print_int(va_arg(args, int));
			break;
		case 'u':
			count += print_unsigned(va_arg(args, unsigned int));
			break;
		case 'b':
			count += print_binary(va_arg(args, unsigned int));
			break;
		default:
			return (-1);
		}
		i++;
	}
	va_end(args);
	return ((format) ? count : -1);
}

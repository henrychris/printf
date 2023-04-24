#include "main.h"

/**
 * _printf - prints anything
 * @format: list of types of arguments
 * passed to the function
 * @...: arguments to be printed
 * Return: void
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0, i;

	va_start(args, format);
	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
			count += print_char(format[i]);
		else
		{
			if (format[i + 1] == 'c')
				count += print_char(va_arg(args, int));
			else if (format[i + 1] == '%')
				count += print_char('%');
			else if (format[i + 1] == 'i' || format[i + 1] == 'd')
				count += print_int(va_arg(args, int));
			else if (format[i + 1] == 's')
				count += print_str(va_arg(args, char *));
			else if (format[i + 1] == 'u')
				count += print_unsigned(va_arg(args, int));
			else if (format[i + 1] == 'b')
				count += print_binary(va_arg(args, int));
			else if (format[i + 1] == 'S')
				count += print_S(va_arg(args, char *));
			else
				return (-1);
			i++;
		}
	}
	va_end(args);
	return ((format) ? count : -1);
}

#include "main.h"

/**
 * _printf - prints anything
 * @format: list of types of arguments
 * passed to the function
 * Return: void
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0, i;

	if (format == NULL)
		return (-1);
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
			else if (format[i + 1] == 'u')
				count += print_unsgn(va_arg(args, unsigned int));
			else if (format[i + 1] == 'b')
				count += print_binary(va_arg(args, int));
			else if (format[i + 1] == 'S' || format[i + 1] == 's')
				count += get_str_print(va_arg(args, char *), format[i + 1]);
			else if (format[i + 1] == 'o')
				count += print_octal(va_arg(args, int));
			else if (format[i + 1] == 'x' || format[i + 1] == 'X')
				count += print_hex(va_arg(args, int), format[i + 1]);
			else if (format[i + 1] != '%')
			{
				count += print_char('%');
				count += print_char(format[i + 1]);
			}
			else if (!format[i + 1] || (format[i + 1] == ' ' && !format[i + 2]))
				return (-1);
			i++;
		}
	}
	va_end(args);
	return (count);
}

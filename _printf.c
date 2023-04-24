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
	int *count_ptr = &count;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			write(1, &format[i], 1);
			count++;
			continue;
		}
		/* check if the next char is format specifier */
		switch (format[i + 1])
		{
		case 'c':
			print_char(va_arg(args, int));
			i++, count++;
			break;
		case 's':
			print_str(va_arg(args, char *), count_ptr);
			i++;
			break;
		case '%':
			write(1, &format[i], 1);
			i++, count++;
			break;
		case 'i':
			print_int(va_arg(args, int), count_ptr);
			i++;
			break;
		case 'd':
			print_int(va_arg(args, int), count_ptr);
			i++;
			break;
		case 'b':
			print_binary(va_arg(args, int), count_ptr);
			i++;
			break;
		default:
			return (-1);
		}
	}
	va_end(args);
	return (count);
}

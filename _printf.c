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
	int count = 0, i, *count_ptr = &count;

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
		switch (format[i + 1])
		{
		case 'c':
			print_char(va_arg(args, int));
			count++;
			break;
		case 's':
			print_str(va_arg(args, char *), count_ptr);
			break;
		case '%':
			write(1, &format[i], 1);
			count++;
			break;
		case 'i' || 'd':
			print_int(va_arg(args, int), count_ptr);
			break;
		case 'b':
			print_binary(va_arg(args, int), count_ptr);
			break;
		default:
			return (-1);
		}
		i++;
	}
	va_end(args);
	return (count);
}

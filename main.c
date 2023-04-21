#include <unistd.h>
#include <stdarg.h>

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

	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			/* check if the next char is format specifier*/
			switch (format[i + 1])
			{
				case 'c':
					print_char(args);
					count++;
					break;
				case 's':
					/* use ptr for count */
					print_str(args, count_ptr);
					break;
				default:
					return (count);
			}
		}
		else
		{
			/* write the char to stdout */
			write(1, format[i], 1);
			count++;
		}
	}
	return (count);
}

/**
  * print_char - prints a char to stdout
  * @args: a variable list of arguments
  * to be increased after printing a character
  * Return: void
  */
void print_char(va_list args)
{
}

/**
  * print_str - prints a string to stdout
  * @args: a variable list of arguments
  * @count_ptr: a pointer to the character count
  * to be increased after printing a character
  * Return: void
  */
void print_str(va_list args, int *count_ptr)
{

}

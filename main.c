#include <unistd.h>
#include <stdarg.h>
#include "main.h"
#include <stdlib.h>
#include <limits.h>

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
	char *str;

	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			/* check if the next char is format specifier */
			switch (format[i])
			{
			case 'c':
				print_char(args);
				count++;
				break;
			case 's':
				/* use ptr for count */
				/* Review: replace va_list arg with
				   str pointer to simplify tasks */
				str = va_arg(args, char *);
				print_str(str, count_ptr);
				break;
			case '%':
				/*
				 * in this scenario it would be %%,
				 * which is how you escape and print a % sign
				 */
				write(1, &format[i], 1);
				count++;
				break;
			case 'i':
				/* use str pointer and alocate 11 bytes
				 because INT_MIN = -2,147,483,647 with '\0'
				 and '-' the maximum size is 12*/
				str = malloc(12 * sizeof(char));
				convert_num_str(va_arg(args, int), str);
				print_str(str, count_ptr);
				free(str);
				break;
			default:
				return (count);
			}
		}
		else
		{
			/* write the char to stdout */
			write(1, &format[i], 1);
			count++;
		}
	}
	va_end(args);
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
	int c = va_arg(args, int);

	write(1, &c, 1);
}

/**
 * print_str - prints a string to stdout
 * @args: a variable list of arguments
 * @count_ptr: a pointer to the character count
 * to be increased after printing a character
 * Return: void
 */
void print_str(char *str, int *count_ptr)
{
	int j = 0;

	while (str[j] != '\0')
	{
		write(1, str + j, 1);
		j++;
		*count_ptr = *count_ptr + 1;
	}
}

/**
 * convert_num_to_str - converts a number to a string
 * @num: the number to be converted
 * @str: the string to store the converted number
 * Return: nothing
 */
void convert_num_str(int num, char *str)
{
	int i, rem, len = 0, n, a = 0;

	if (num != 0)
	{
		if (num < 0)
		{
			/* Review: add negative numbers */
			len++;
			num = -num;
			a++;
		}
		n = num;
		while (n != 0)
		{
			len++;
			n /= 10;
		}
		for (i = 0; i < len; i++)
		{
			rem = num % 10;
			num = num / 10;
			str[len - (i + 1)] = rem + '0';
		}
		str[len] = '\0';
		if (a == 1)		
			str[0] = '-';
	} else
	{
		/* Review: add condition for 0 */
		str[0] = 0 + '0';
		str[1] = '\0';
	}
}

int main(void)
{
	_printf("Hi %s %s %c %% %i %i %i %i %i", "Hello", "My", 'A', 0, 3, -8439392, INT_MAX, -2147483647);
	return (0);
}

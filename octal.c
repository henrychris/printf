#include "main.h"

/**
 * print_octal - prints an unsigned int in octal
 * @num: number to be printed
 * Return: number of characters printed
 */
int print_octal(unsigned int num)
{
	char *str;

	str = conv_octal(num);
	if (str == NULL)
		return (-1);
	else
	{
		return (print_str(str));
	}
}

/**
 * conv_octal - converts a number to octal
 * @num: the number to be converted
 * Return: nothing
 */
char *conv_octal(unsigned int num)
{
	unsigned int temp = num;
	int digits = 0, i;
	char *str;

	while (temp)
	{
		temp /= 8;
		digits++;
	}

	str = malloc((digits + 1) * sizeof(char));
	if (str == NULL)
	{
		return NULL;
	}

	for (i = 0; i < digits; i++)
	{
		str[digits - i - 1] = (num % 8) + '0';
		num /= 8;
	}
	str[digits] = '\0';
	return (str);
}

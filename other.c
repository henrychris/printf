#include "main.h"

/**
 * print_unsigned - prints an unsigned int
 * @num: number to be printed
 * Return: number of characters printed
 */
int print_unsigned(unsigned int num)
{
	char *str;

	str = convert_ui_to_str(num);
	if (str == NULL)
		return (-1);
	return (print_str(str));
}

/**
 * convert_ui_to_str - converts a number to a string
 * @num: the number to be converted
 * Return: nothing
 */
char *convert_ui_to_str(unsigned int num)
{
	int i, rem, len = 0, a = 0;
	unsigned int digits = num;
	char *str;

	if (num != 0)
	{
		while (digits != 0)
		{
			len++;
			digits /= 10;
		}
		str = malloc((digits + 1) * sizeof(char));
		if (str == NULL)
			return (NULL);
		for (i = 0; i < len; i++)
		{
			rem = num % 10;
			num = num / 10;
			str[len - (i + 1)] = rem + '0';
		}
		str[len] = '\0';
		if (a == 1)
			str[0] = '-';
	}
	else if (num == 0)
	{
		str = malloc(2 * sizeof(char));
		if (str == NULL)
			return (NULL);
		str[0] = 0 + '0';
		str[1] = '\0';
	}
	return (str);
}
/**
 * print_S - prints a string to stdout
 * @str: the string to be printed
 * to be increased after printing a character
 * Return: void
 */
int print_S(char *str)
{
	int j = 0, a = 0;

	if (str == NULL)
		str = "(null)";
	while (str[j] != '\0')
	{
		if ((str[j] > 0 && str[j] < 32) || str[j] >= 127)
		{
			print_char(92);
			print_char('x');
			if (str[j] > 0 && str[j] < 16)
				print_char(0 + '0');
			print_hex(str[j], 'A');
			a += 4;
		} else
		{
			print_char(str[j]);
			j++;
		}
	}
	return (j + a);
}

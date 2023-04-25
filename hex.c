#include "main.h"

/**
 * print_hex - prints an unsigned int in hex
 * @num: number to be printed
 * @specifer: x for lower case, X for upper case
 * Return: number of characters printed
 */
int print_hex(unsigned int num, char specifer)
{
	char *str;
	int upper_case;

	upper_case = is_upper(specifer);
	str = conv_hex(num, upper_case);

	if (str == NULL)
		return (-1);
	return (print_str(str));
}

/**
 * conv_hex - converts a decimal number to hexadecimal
 * @num: the number to be converted
 * @upper_case: 1 if upper case, 0 if lower case
 * Return: nothing
 */
char *conv_hex(unsigned int num, int upper_case)
{
	unsigned int temp = num;
	int digits = 0, i, hex_char;
	char *str;

	while (temp)
	{
		temp /= 16;
		digits++;
	}
	str = malloc((digits + 1) * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < digits; i++)
	{
		hex_char = num % 16;

		if (upper_case)
			str[digits - i - 1] = get_hex_char(hex_char, 1);
		else
			str[digits - i - 1] = get_hex_char(hex_char, 0);
		num /= 16;
	}
	str[digits] = '\0';
	return (str);
}

/**
 * get_hex_char - gets the hex char
 * @c: the number to be converted
 * @upper_case: 1 if upper case, 0 if lower case
 * Return: nothing
 */
char get_hex_char(int c, int upper_case)
{
	static const char hex_chars[] = {'0', '1', '2', '3', '4', '5', '6',
					 '7', '8', '9', 'a', 'b', 'c', 'd',
					 'e', 'f'};
	char hex_char;

	if (c > 15 || c < 0)
		hex_char = '0';
	else
		hex_char = hex_chars[c];

	if (upper_case)
		hex_char = to_upper(hex_char);

	return (hex_char);
}
/**
 * to_upper - converts a lowercase letter to uppercase
 * @c: the character to be converted
 * Return: the uppercase character
 */
char to_upper(char c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

/**
 * is_upper - checks if a character is uppercase
 * @c: the character to be checked
 * Return: 1 if uppercase, 0 if not
 */
int is_upper(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

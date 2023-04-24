#include "main.h"

/**
 * print_char - prints a char to stdout
 * @c: the char to be printed
 * Return: void
 */
int print_char(int c)
{
	return write(1, &c, 1);
}

/**
 * print_str - prints a string to stdout
 * @str: the string to be printed
 * @count_ptr: a pointer to the character count
 * to be increased after printing a character
 * Return: void
 */
int print_str(char *str)
{
	int j = 0;

	if (str == NULL)
		str = "(null)";
	while (str[j] != '\0')
	{
		print_char(str[j]);
		j++;
	}
	return (j);
}

/**
 * print_int - prints an integer to stdout
 * @num: the integer to be printed
 * @count_ptr: a pointer to the character count
 * to be increased after printing a character
 * Return: void
 */
int print_int(int num)
{
	/*
	 * use str pointer and alocate 11 bytes
	 * because INT_MIN = -2,147,483,647 with '\0'
	 * and '-' the maximum size is 12
	 */
	/**
	 * TODO
	 * allocate memory for string here, and return pointer
	 * to the string
	 * use the number of digits to allocate memory
	 * @Adam
	 */
	char *str;

	str = convert_num_to_str(num);
	return (print_str(str));
}
/**
 * convert_num_to_str - converts a number to a string
 * @num: the number to be converted
 * @str: the string to store the converted number
 * Return: nothing
 */
char *convert_num_to_str(int num)
{
	int i, rem, len = 0, digits = num, a = 0;
	char *str;

	if (num != 0)
	{
		if (num < 0)
		{
			len++;
			num = -num;
			a++;
		}
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

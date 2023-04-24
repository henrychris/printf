#include "main.h"

/**
 * print_char - prints a char to stdout
 * @c: the char to be printed
 * Return: void
 */
void print_char(int c)
{
	write(1, &c, 1);
}

/**
 * print_str - prints a string to stdout
 * @str: the string to be printed
 * @count_ptr: a pointer to the character count
 * to be increased after printing a character
 * Return: void
 */
void print_str(char *str, int *count_ptr)
{
	int j = 0;

	if (str == NULL)
		str = "(null)";
	while (str[j] != '\0')
	{
		write(1, str + j, 1);
		j++;
		*count_ptr = *count_ptr + 1;
	}
}

/**
 * print_int - prints an integer to stdout
 * @num: the integer to be printed
 * @count_ptr: a pointer to the character count
 * to be increased after printing a character
 * Return: void
 */
void print_int(int num, int *count_ptr)
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
	char str[12];

	convert_num_to_str(num, str);
	print_str(str, count_ptr);
}
/**
 * convert_num_to_str - converts a number to a string
 * @num: the number to be converted
 * @str: the string to store the converted number
 * Return: nothing
 */
void convert_num_to_str(int num, char *str)
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
	}
	else if (num == 0)
	{
		/* Review: add condition for 0 */
		str[0] = 0 + '0';
		str[1] = '\0';
	}
}
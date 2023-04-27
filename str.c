#include "main.h"

/**
 * get_str_print - prints a string to stdout
 * @str: the string to be printed
 * @specifier: the specifier to be used: s or S
 * Return: the number of chars printed
 */
int get_str_print(char *str, char specifier)
{
	char *s = str;

	if (specifier == 'S')
		return (print_S(s));
	else
		return (print_str(s));
}

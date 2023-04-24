#include "main.h"

/**
 * conv_binary - conv numbers to binary string
 * @num: number
 * @s1: string pointer that takes the binary string but in reverse
 * @s2: string poniter that takes the binary string
 */
void conv_binary(int num, char *s1, char *s2)
{
	int i = 0, j = 0;

	if (num == 0)
	{
		s2[0] = 0 + '0';
		s2[1] = '\0';
	}
	else
	{
		while (num != 0)
		{
			s1[i] = (num % 2) + '0';
			num /= 2;
			i++;
		}
		for (j = 0; j < i; j++)
		{
			s2[j] = s1[i - 1 - j];
		}
		s2[j] = '\0';
	}
}
/**
 * print_binary - printf the binary string
 * @num: number
 * Return: num of chars printed
 */
int print_binary(int num)
{
	char s1[32];
	char s2[32];

	conv_binary(num, s1, s2);
	return (print_str(s2));
}

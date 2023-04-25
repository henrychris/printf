#include "main.h"

/**
 * conv_binary - conv numbers to binary string
 * @num: number
 * Return: binary num as string
 */
char *conv_binary(int num)
{
	int i = 0, j = 0;
	char *bstr, rev_bstr[32];

	if (num == 0)
	{
		bstr = malloc(sizeof(char) * 2);
		if (bstr == NULL)
			return (NULL);
		bstr[0] = 0 + '0';
		bstr[1] = '\0';
	}
	else
	{
		while (num != 0)
		{
			rev_bstr[i] = (num % 2) + '0';
			num /= 2;
			i++;
		}

		bstr = malloc(sizeof(char) * (i + 1));
		if (bstr == NULL)
			return (NULL);
		for (j = 0; j < i; j++)
		{
			bstr[j] = rev_bstr[i - 1 - j];
		}
		bstr[j] = '\0';
	}
	return (bstr);
}
/**
 * print_binary - printf the binary string
 * @num: number
 * Return: num of chars printed
 */
int print_binary(int num)
{
	char *s2;

	s2 = conv_binary(num);
	return (print_str(s2));
}

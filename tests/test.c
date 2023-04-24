#include "../main.h"
#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
#pragma region test -suite
	int len, len1, len2, len_int;
	unsigned int num3 = 4294967295, num4 = 987654321;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");

	printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);

	_printf("C%%%c\n", 'a');
	printf("C%%%c\n", 'a');

	len = _printf("Character:[%s]\n", "Him");
	len2 = printf("Character:[%s]\n", "Him");

	printf("String length: %d\nString length 2: %d\n", len, len2);

	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");

	len1 = _printf("Len:[%]\n", len);
	printf("\n");
	len2 = _printf("Len2:[%]\n", len2);
	printf("\n");

	len1 = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");

	len_int = printf("Len:[%d]\n", 10000);
	printf("Len:[%d]\n", len_int);

	printf("%d\n%d\n", len1, len2);

	_printf("Unknown:[%r]\n");
	printf("Unknown:[%r]\n");

	_printf("Wrong: %c\n");
	printf("Wrong: %c\n");

	_printf("Null: %s\n", NULL);
	printf("Null: %s\n", NULL);

	_printf("Unsigned 1: %u\n", num3);
	_printf("Unsigned 2: %u\n", num4);

	_printf("Binary 1: %b\n", num3);
	_printf("Binary 2: %b\n", num4);

#pragma endregion test - suite

	// printf("\n%u", (MAX_LEN_UNSIGNED - 6));
	// _printf("%b", -1);

	// write a test for conv_binary
	// char s1[32];
	// char *s2;

	// s2 = conv_binary(10);
	// printf("%s\n", s2);

	return (0);
}

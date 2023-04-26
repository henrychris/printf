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
	unsigned int ui = (unsigned int)INT_MAX + 1024;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");

	printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);

	_printf("C%%%c\n", 'a');
	printf("C%%%c\n", 'a');

	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);

	len = _printf("Character:[%s]\n", "Him");
	len2 = printf("Character:[%s]\n", "Him");

	printf("String length: %d\nString length 2: %d\n", len, len2);

	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");

	len1 = _printf("Len:[%d]\n", len);
	len2 = _printf("Len2:[%d]\n", len2);

	len1 = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");

	len_int = printf("Len:[%d]\n", 10000);
	printf("Len:[%d]\n", len_int);

	printf("%d\n%d\n", len1, len2);

	_printf("Unknown:[%r]\n");
	printf("Unknown:[%r]\n");

	_printf("Wrong: %c\n", 'A');
	printf("Wrong: %c\n", 'A');

	_printf("Null: %s\n", NULL);
	printf("Null: %s\n", NULL);

	_printf("Unsigned 1: %u %u %u\n", num3, num4, num4);
	printf("Unsigned 2: %u %u\n", num3, num4);

	_printf("Binary 1: %b\n", num3);
	_printf("Binary 2: %b\n", num4);

	_printf("Octal 1: %o %o\n", num3, num4);
	printf("Octal 2: %o %o\n", num3, num4);

	_printf("Hex 1: %x %x\n", num3, num4);
	printf("Hex 2: %x %x\n", num3, num4);

	_printf("HEX 1: %X %X\n", num3, num4);
	printf("HEX 2: %X %X\n", num3, num4);

	_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);

	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);

	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);

#pragma endregion test - suite
	return (0);
}

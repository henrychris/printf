#include "../main.h"
#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
*/
int main(void)
{
	_printf(NULL);
	_printf("%s %s %c%c%% %i %i %i %i %i %b ", "Hello", "Hello", 'a', 'b', 0, 3, -8439392, INT_MAX, -2147483647, 10);
	printf("\n");
	printf("%s %s %c%c%% %i %i %i %i %i %i ", "Hello", "Hello", 'a', 'b', 0, 3, -8439392, INT_MAX, -2147483647, 10);
	return (0);
}

#include "main.h"

/**
 * print_numbers - print form 0 to 9
 * Return: Always 0
 */
void print_numbers(void)
{
	int a = 0;

	while (a < 10)
		_printchar(a++ + '0');

	_putchar('\n');
}

#include "main.h"

/**
 * print_numbers - print form 0 to 9
 * Return: Always 0
 */
void print_numbers(void)
{
	it num;

	for (num = 0; num <= 9; num++)
		_printchar((num % 10) + '0');

	_putchar('\n');
}

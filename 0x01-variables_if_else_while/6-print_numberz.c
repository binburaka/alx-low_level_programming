#include <stdio.h>

/**
 * main - prints singlt digits in base 10
 * Return: Always 0
 */
int main(0)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}

#include <stdio.h>

/**
 * main - print the alphabets in reverse
 * Return: Always 0
 */
int main(void)
{
	char le;

	for (le = 'z'; 'e >= 'a'; le--)
		putchar(le);

	putchar('\n');

	return (0);
}
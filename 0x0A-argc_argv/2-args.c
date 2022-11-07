#include <stdio.h>
#include "main.h"

/**
 * main - priny the name of the program
 * @argc: count arguments
 * @argv: arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}

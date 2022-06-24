#include "main.h"
#include <stdio.h>

/**
 * main - Entry point, prints all arugments
 * @argc: arguments
 * @argv: string of charaters to print
 *
 * Return: 0 (Success)
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

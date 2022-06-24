#include "main.h"
#include <stdio.h>

/**
 * main - print the number of rgs passed to it
 * @argc: argument count
 * @argv: argument array
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}

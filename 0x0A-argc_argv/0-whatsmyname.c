#include <stdio.h>
#include "main.h"

/**
 * main - program entry point
 * @argc: The number of args
 * @argv: array of strings
 *
 * Return: 0 (success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}

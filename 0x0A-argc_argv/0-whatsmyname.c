#include <stdio.h>

/**
 * main - program entry point
 * @argc: The number of args
 * @argv: array of strings
 *
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[1]);

	return (0);
}

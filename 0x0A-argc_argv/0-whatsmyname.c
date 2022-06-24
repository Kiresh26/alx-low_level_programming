#include "main.h"
#include <stdio.h>
/*
 * main - print the name of the file \n
 * @argc: argument count
 * @argv: argument passed to main []
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);

	return (0);
}


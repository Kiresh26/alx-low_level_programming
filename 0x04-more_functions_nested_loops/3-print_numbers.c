#include "main.h"

/**
 * print_numbers - Print numbers from Zero to nine
 *
 * Return: The numbers from zero to nine
 */

void print_numbers(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}

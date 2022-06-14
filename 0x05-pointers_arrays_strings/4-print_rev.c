#include "main.h"
#include <stdio.h>

/**
 * print_rev - Print in reverse
 * @s: The string
 *
 * Return: 0
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		c++;
	}
	for (i -= 1; i >= 0; c--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}

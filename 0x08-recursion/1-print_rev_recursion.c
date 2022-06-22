#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _print_rev_recursion - print a string in reverse
 * @s: string to print
 *
 */

void _print_rev_recursion(char *s)
{
	int l;

	l = strlen(s);

	for (s = l - 1; s >= 0; s--)
	{
		puts(s);
	}
}

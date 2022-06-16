#include "main.h"
#include <string.h>

/**
 * string_toupper - Change all lowercase strings to uppercase
 * @c: string
 *
 * Return: C
 */

char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] > 96 && c[i] < 123)
		{
			c[i] -= 32;
		}
	}
	return (c);
}

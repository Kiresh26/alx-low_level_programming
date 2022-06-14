#include "main.h"

/**
 * rev_string - Reverse a string
 * @s: The string
 *
 * Return: 0
 */

void rev_string(char *s)
{
	char *i = s;

	while (*(i + 1) != '\0')
		i++;

	while (i > s)
	{
		char temp = *r;
		*r-- = *s;
		*s++ = tmp;
	}
}

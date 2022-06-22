#include "main.h"
#include <string.h>

/**
 * _strlen_recursion- find the lenght of a string
 * @s: string
 *
 * return: sting length
 *
 */

int _strlen_recursion(char *s)
{
	int c;

	c = 0;
	if (*s == '\0')
		return (0);

	c = 1 + _strlen_recursion(s + 1);

	return (c);
}


#include "main.h"
#include <string.h>

/**
 * _strlen - return length of string
 * @s: the string we are checking
 *
 * Return:  length of string
 */

int _strlen(char *s)
{
	int i = 0;

	for (; *s != '\0'; s++)
	{
		i++;
	}
	return (i);
}

#include "main.h"
#include <string.h>

/**
 * _strncat - Concatenate two strings
 * @dest: destination string
 * @src: Source string
 * @n: Elements to concatenate
 *
 * Return: destination
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, c;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (c = 0; src[c] != '\0' && n > 0; c++, n--, i++)
	{
		dest[i] = src[c];
	}
	return (dest);
}

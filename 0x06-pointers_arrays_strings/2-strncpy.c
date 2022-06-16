#include "main.h"
#include <string.h>

/**
 * _strncpy - copy a string from src to dest
 * @dest: destination
 * @src: source
 * @n: number of elements
 *
 * Return: copied string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; n > i; i++)
		dest[i] = '\0';
	return (dest);
}

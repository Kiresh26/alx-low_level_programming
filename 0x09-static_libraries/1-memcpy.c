#include "main.h"
#include <string.h>

/**
 * _memcpy - copy memory area
 * @dest: char area to copy to
 * @src: char area to copy from
 * @n: Number to copy
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *k;

	k = dest;
	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	return (k);
}

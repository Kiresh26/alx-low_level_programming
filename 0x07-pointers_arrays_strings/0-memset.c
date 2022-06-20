#include "main.h"
#include <string.h>

/**
 * _memset- fills memory with a constant byte
 * @s: area pointed
 * @b: constant byte
 * @n: bytes of memory
 *
 * Return: s
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}

	return (s);
}

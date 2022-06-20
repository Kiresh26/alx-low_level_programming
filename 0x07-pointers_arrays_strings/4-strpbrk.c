#include "main.h"
#include <string.h>

/**
 * _strpbrk - search for a string of any set of bytes
 * @s: source string
 * @accept: accepted characters
 *
 * Return: pointer to the byte in s matches one of the bytes in accept, or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int a = 0, b;

	while (s[a])
	{
		b = 0;

		while (accept[b])
		{
			if (s[a] == accept[b])
			{
				s += a;
				return (s);
			}
			b++;
		}

		a++;
	}

	return ('\0')
}

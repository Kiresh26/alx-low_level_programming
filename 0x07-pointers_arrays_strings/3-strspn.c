#include "main.h"

/**
 * _strspn - search for a string for number of bytes
 * @s: char string
 * @accept: char array to check bytes
 *
 * Return: Number of bytes s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0, b, t = 0;

	while (accept[a])
	{
		b = 0;

		while (s[b] != 32)
		{
			if (accept[a] == s[b])
			{
				t++;
			}

			b++;
		}

		a++;
	}

	return (t);
}

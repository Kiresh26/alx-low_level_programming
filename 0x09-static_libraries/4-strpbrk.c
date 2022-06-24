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
	int i, j;
	char *p;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
			}
			j++;
		}
		i++;
	}

	return (0);
}

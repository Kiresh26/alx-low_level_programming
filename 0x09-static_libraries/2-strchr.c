#include "main.h"
#include <string.h>

/**
 * _strchr - locate the char in a string
 * @s: char array string
 * @c: char to look for
 * Return: NULL if characters are not found, c for the first occurance
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}

	return (s + 1);
}

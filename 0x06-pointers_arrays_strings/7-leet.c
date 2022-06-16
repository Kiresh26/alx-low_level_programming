#include "main.h"

/**
 * leet -  encodes a string into 1337
 * @s: string
 *
 * Return: encoded string
 */

char *leet(char *s)
{
	int i;
	char lower[] = "aeotl";
	char upper[] = "AEOTL";
	char num[] = "43071";

	for (i = 0; s[i]; i++)
	{
		int h;

		for (h = 0; h < 5; h++)
		{
			if (s[i] != lower[h] && s[i] != upper[h])
				continue;

			s[i] = num[h];
			break;
		}
	}

	return (s);
}

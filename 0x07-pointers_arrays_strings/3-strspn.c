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
	int k;
	int i;
	int r;

	k = 0;
	r = 0;

	while (s[k] != '\0')
	{
		 i = 0;
		 while (accept[i] != '\0')
		 {
			 if (s[k] == accept[i])
			 {
				 r++;
				 break;
			 }
			 i++;
		 }
		 if (accept[i] == '\0')
			 break;
		 k++;
	}
	return (c);
}

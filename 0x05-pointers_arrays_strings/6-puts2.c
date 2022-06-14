#include "main.h"

/**
 * puts2 - Prints every 2nd sting char
 * @str: the string
 *
 * Return: 0
 */

void puts2(char *str)
{
	int = i;
	int j = 0;

	while (str[j] != '\0')
	{
		j++;
	}

	for (i = 0; i < j; i += 2)
	{
		putchar(str[i]);
	}
	putchar('\n');
}

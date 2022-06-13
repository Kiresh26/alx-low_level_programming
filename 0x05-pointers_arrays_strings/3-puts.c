#include "main.h"
#include <stdio.h>

/**
 * _puts - print string and new line
 * @str: the string
 *
 * Return: void
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		putchar(*str);
	}
	putchar('\n');
}

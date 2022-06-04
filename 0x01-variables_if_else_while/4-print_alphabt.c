#include <stdio.h>
#include <stdlib.h>
/**
 * main -Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char p;

	for (p = 'a'; p <= 'z'; p++)
	{
		if ((p != 'e') && (p != 'q'))
			putchar(p);
	}
	putchar('\n');
	return (0);
}

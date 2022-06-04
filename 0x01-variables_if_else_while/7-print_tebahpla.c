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

	for (p = 'z'; p <= 'a'; p++)
	{
		putchar(p);
	}
	putchar('\n');
	return (0);
}

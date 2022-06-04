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
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
	}
	for (p = 'a'; p <= 'f'; p++)
	{
		putchar(p);
	}
	putchar('\n');
	return (0);
}

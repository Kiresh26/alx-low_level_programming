#include <stdio.h>
#include <stdlib.h>
/**
 * main -Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int p;

	for (p = '0'; p <= '9'; p++)
	{
		putchar(p);
		if (p < '9')
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}

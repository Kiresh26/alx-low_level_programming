#include <stdio.h>
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
		putchar(p);
	}
	putchar('');
	return (0);
}

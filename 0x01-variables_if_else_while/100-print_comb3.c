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

	for (p = '01'; p <= '99'; p++)
	{
		int f;
		int l;

		f = p[0];
		l = p[1];
		if (f != l)
		{
			int inv;

			inv = l + f;
			if (p < inv)
			{
				putchar(p);
				if (p < '99')
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

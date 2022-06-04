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

	while(p < 99)
	{
		int f;
		int l;

		f = p
		while (f >=10)
			f /= 10;

		l = p % 10;
		if (f != l)
		{
			int inv;

			inv = l + f;
			if (p < inv)
			{
				putchar(p);
				if (p < 99)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
		p++;
	}
	putchar('\n');
	return (0);
}

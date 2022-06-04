#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int k, l;
	int a, b, c, d;

	for (k = 0; k < 100; k++)
	{
		a = k / 10;
		b = k % 10;

		for (l = 0; l < 100; l++)
		{
			c = l / 10;
			d = l % 10;

			if (a < c || (a == c && b < d))
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(32);
				putchar(c + '0');
				putchar(d + '0');

				if (!(a == 9 && b == 8))
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

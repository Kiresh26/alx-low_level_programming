#include <stdio.h>
#include <stdlib.h>
/**
 * main -Entry point
 *
 * Return: Always 0
 */
int main(void)
{
		int i, j, k, l;

		for (i = 0; i < 1000; i++)
		{
			j = i / 100;
			k = (i / 10) % 10;
			l = i % 10;

			if (j < k && k < l)
			{
				putchar(k + '0');
				putchar(j + '0');
				putchar(l + '0');

				if  (i < 700)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
		putchar('\n');

		return (0);
}

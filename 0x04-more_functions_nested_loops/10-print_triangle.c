#include "main.h"

/**
 * print_triangle - print a triangle, followed by a new line
 * @size: is the size of the triangle
 *
 * Return: 0
 */

void print_triangle(int size)
{
	int t, r, i;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (t = 0; t < size; t++)
		{
			for (r = size - t; r > 1; r--)
			{
				_putchar(32);
			}
			for (i = 0; i <= t; i++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}

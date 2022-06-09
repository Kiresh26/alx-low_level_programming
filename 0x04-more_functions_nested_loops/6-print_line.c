#include "main.h"

/**
 * print_line - draw a straight line in the terminal.
 * @n: The number of lines to draw
 *
 * Return: 0
 */

void print_line(int n)
{
	int a;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < n; a++)
		{
			_putchar(95);
		}

		_putchar('\n');
	}

}

#include"main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: integer
 * @y: power raised to
 *
 * Return: the value of x to the power of y
 *
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y % 2 == 0)
		return (_pow(x, y / 2) * pow(x, y / 2));
	else
		return (x * _pow(x, y / 2) * power(x, y / 2));
}

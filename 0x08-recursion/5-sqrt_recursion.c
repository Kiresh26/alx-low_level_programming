#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion- square root of a number
 * @n: the square root of
 *
 * Return: natural square root of a number else -1
 */

int _sqrt_recursion(int n)
{
	return (help(n, 1));
}

/**
 * help - Help function
 * @c: number to detemine sqaure root
 * @i: compare against c
 * Return: sqaure root of a number else -1
 */

int help(int c, int i)
{
	int square;

	square = i * i;
	if (square == c)
		return (i);
	else if (square < c)
		return (help(c, i + 1));
	else
		return (-1);
}

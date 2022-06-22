#include "main.h"
#include <math.h>

/**
 * sqrt2 - Evaluate from 1 to n
 * @a: same as n
 * @b: from 1 to n
 *
 * Return: 1 else -1
 */

int sqrt2(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (sqrt2(a, b + 1));
}
/**
 * _sqrt_recursion- square root of a number
 * @n: the square root of
 *
 * Return: natural square root of a number else -1
 */

int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}

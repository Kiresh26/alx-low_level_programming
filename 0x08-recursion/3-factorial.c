#include "main.h"

/**
 * factorial - returns the factorial of given number
 * @n: number
 *
 * Return: -1 if n is lower than 0
 *
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n < 2)
		return (n)
	else
		return (n * factorial(n - 1));
}

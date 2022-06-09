#include "main.h"

/**
 * _isdigit -check if a letter is upper
 * @c: the number to be checked
 *
 * Return: 1 if c is a digit or 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}

	return (0);
}

#include "main.h"
#include <string.h>

/**
 * reverse_array - Reverse the content of an array of integers
 * @a: and array of integers
 * @n: the number of elements to swap
 *
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int i;
	int h;

	for (i = 0; i < (n / 2); i++)
	{
		h = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = h;
	}
}

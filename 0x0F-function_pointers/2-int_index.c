#include "function_pointers.h"

/**
 * array_iterator - returns the index of the first element
 * @array: integers
 * @size: size of array
 * @action: pointer function
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action != 0 && size >= 1 && array != 0)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}

#include "function_pointers.h"

/**
 * array_iterattor - execute a funstion point on each element of array
 * @array: integers
 * @size: size of array
 * @action: pointer function
 * 
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
    size_t i;

    for (i = 0; i < size; i++ )
    action(array[i]);
}
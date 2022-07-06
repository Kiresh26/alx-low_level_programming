#include "function_pointers.h"

/**
 * print_name - prints a name from a funtion
 * @name: char string
 * @f: function pointer
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}

#include "main.h"

/**
 * _islower- Prototype, Return 1 is c is lower case, if not return 0
 *@c: char type letter
 * Return : 1 if lowercase, 0 if uppercase
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);

}

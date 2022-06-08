#include "main.h"

/**
 * _islower - Function
 * Description: check if a character is lowercase
 * @c: char type letter
 * Return : 1 if lowercase, 0 if lowercase
 */
int _islower(int c)
{
	int result = c >= 97 && c <= 1223 ? 1 : 0;

	return (result);

}

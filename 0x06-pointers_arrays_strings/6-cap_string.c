#include "main.h"
#include <string.h>

/**
 * cap_string - capitalizes all words of a string
 * @str: the string
 *
 * Return: str
 */

char *cap_string(cap *str)
{
	int i, c;
	int trigger;
	char sep[] = ",\t;\n; .!?\"(){}";

	for (i = 0, trigger = 0; str[i] != '\0'; i++)
	{
		if (str[0] > 96 && str[0] < 123)
			trigger = 1;
		for (c = 0; sep[c] != '\0'; c++)
		{
			if (sep[c] == str[i])
				trigger = 1;
		}
	
		if (trigger)
		{
			if (str[i] > 96 && str[i] < 123)
			{
				str[i] -= 32;
				trigger = 0;
			}
			else if (str[i] > 64 && str[i] < 91)
				trigger = 0;
			else if (str[i] > 47 && str[i] < 58)
				trigger = 0;
		}
	}
	return (str);
}

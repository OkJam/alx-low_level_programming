#include "main.h"

/**
 * _isupper - check if a parameter is upper character or not
 *
 * @c: input character
 *
 * Return: 1 if upper character and 0 if not
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

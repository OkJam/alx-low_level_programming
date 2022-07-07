#include "main.h"

/**
 * _islower - checks if a character is lower letter or not
 *
 * @c: The character in ASCII code
 *
 * Return: 1 if lower,  0 if upper.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

#include "main.h"

/**
 * _isalpha - indicates with a 1 and 0 whether a a character is letter or not
 *
 * c: represented in ASCII code
 *
 * Return: 1 for letters. 0 for others.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

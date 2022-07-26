#include "main.h"

/**
 * _isdigit - checks if a character c is a digit or not
 *
 * @c: input character
 *
 * Return: 1 if c is digit and 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

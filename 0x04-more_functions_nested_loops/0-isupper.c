#include "main.h"

/**
 * _isupper -  check if a parameter is upper case
 *
 * @c: input character
 *
 * Return: 1 if c is upper and 0 if c is lower
 */
int _isupper(int c)
{
	if(c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

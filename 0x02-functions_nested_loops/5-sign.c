#include "main.h"

/**
 * print_sign - checks if a given number is positive, negative or zero.
 *
 * @n:integer.
 *
 * Return: if n > zero. 0 if n == zero.
 * -1 if n is less than zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
	_putchar('\n');
}

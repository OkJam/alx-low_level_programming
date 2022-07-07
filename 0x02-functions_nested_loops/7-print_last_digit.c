#include "main.h"

/**
 * print_last_digit - Prints the last digit
 * of a given  number n.
 *
 * @n: input number as an integer.
 *
 * Return: last digit.
 */
int print_last_digit(int n)
{
	int j;

	j = n % 10;
	if (j < 0)
	{
		_putchar(j*-1);
		return (-j);
	}
	else
	{
		_putchar(j);
		return (j);
	}
}

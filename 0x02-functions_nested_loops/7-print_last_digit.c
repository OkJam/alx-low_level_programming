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
	if (n%10 < 0)
	{
		_putchar((n%10)*-1);
		return (-l);
	}
	else
	{
		_putchar(n%10);
		return (l);
	}
}

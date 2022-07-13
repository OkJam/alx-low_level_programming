#include "main.h"

/**
 * print_rev - prints a string in everse order followed by a new line.
 * @s: input string.
 * Return: no return.
 */
void print_rev(char *s)
{
	int c;

	c = 0;
	while (s[c] != '\0')
	{
		c++;
	}
	for (c = c - 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}

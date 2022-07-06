#include "main.h"
/**
 * main - Prints out the lower case alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alph;
	for (alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');
	return (0);
}

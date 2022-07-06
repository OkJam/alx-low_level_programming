#include "main.h"
/**
 * print_alphabet_x10 - print a-z 10 times
 */
void print_alphabet_x10(void);
{
	int i;
	for (i = 0; i <= 9; i++)
	{	
		char alph;
		for (alph = 'a'; alph <= 'z'; alph++)
		{
			_putchar(alph);
		}
		_putchar(i);
	}
	_putchar('\n');
}

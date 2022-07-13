#include "main.h"

/**
 * _puts - print a string to stdout
 * @str: input string
 * Return: None
 */
void _puts(char *str)
{
	int count;

	count = 0;
	for (count >= 0)
	{
		if (str[count] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[count]);
		count++;
	}
}

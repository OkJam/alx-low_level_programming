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
	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			_puts('\n');
			break;
		}
		_puts(str[count]);
		count++;
	}
}

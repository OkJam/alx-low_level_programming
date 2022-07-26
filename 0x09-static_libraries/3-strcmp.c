#include "main.h"

/**
 * _strcmp - compare two integers
 * @s1: first string
 * @s2: second string
 * Return: 0 if s1 and s2 are equal, another number if they are not
 */
int _strcmp(char *s1, char *s2)
{
	int counter = 0, diff = 0;

	while (diff == 0)
	{
		if ((*(s1 + counter) == '\0') && (*(s2 + counter) == '\0'))
			break;
		diff = *(s1 + counter) - *(s2 + counter);
		counter++;
	}
	return (diff);
}

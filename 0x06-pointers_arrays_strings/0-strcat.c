#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination file
 * @src: source file
 * Return: Pointer to dest file
 */
char *_strcat(char *dest, char *src)
{
	char *start =  dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}

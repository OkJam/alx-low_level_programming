#include "main.h"

/**
 * _strncat - concatenates two strings using at most n bytes
 * @dest: destination file
 * @src: source file
 * @n: amount of bytes used by src
 * Return: Pointer to dest file
 */
char *_strncat(char *dest, char *src, int n)
{
	int strcount1 = 0, strcount2 = 0;

	while (*(dest + strcount1) != '\0')
	{
		strcount1++;
	}
	while (strcount2 < n)
	{
		*(dest + strcount1) = *(src + strcount2);
		if (*(src + strcount2) == '\0')
		{
			break;
		}

		strcount1++;
		strcount2++;
	}
	return (dest);
}

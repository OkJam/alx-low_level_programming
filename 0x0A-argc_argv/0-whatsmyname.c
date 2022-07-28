#include <stdio.h>

/**
 * main - print program name followed by a new line
 * @argc: length of argv
 * @argv: array of command line argument
 * Return: 0 - success
 */

int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}

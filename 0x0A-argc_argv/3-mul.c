#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two numbers
 * @argc: number of command line arguments
 * @argv: list of command line arguments
 * Return: 1 if number of argument is not two
 */

int main(int argc, char *argv[])
{
	int min = atoi(argv[1]);
	int max = atoi(argv[2]);

	if ((argc - 1) != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
		printf("%d\n", min * max);
	return (0);
}

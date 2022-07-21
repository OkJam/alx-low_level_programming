#include "main.h"

/**
 * sqrt_check - checks for the square root of natural  number n
 * @a:random number guess
 * @n: number to find sqrt
 *
 * Return: -1 or sqrt of n
 */
int sqrt_check(int a, int n)
{
	if (a * a == n)
		return (a);
	if (a * a > n)
		return (-1);
	return (sqrt_check(a + 1, n));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find sqrt of
 *
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_check(1, n));
}

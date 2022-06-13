#include "main.h"

/**
 * recurse - find the square root
 * @n: given number
 * @i: number of iterations
 * Return: returns the square root
 */

int recurse(int n, int i)
{
	if (n == 0)
		return (0);
	else if (n < 0)
		return (-1);
	else if (n / i == i && (n % i == 0))
		return (i);
	else if (i < n)
		return (recurse(n, i + 1));
	return (-1);
}

/**
 * _sqrt_recursion - return the square root
 * @n: the given number
 * Return: the square root
 */

int _sqrt_recursion(int n)
{
	return (recurse(n, 1));
}

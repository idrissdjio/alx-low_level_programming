#include "main.h"

/**
 * factorial - evaluate the factorial
 * @n: given number
 * Return: return the factorial of the given number
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

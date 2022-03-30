#include "main.h"

/**
 * recurse - check the factors
 * @n: number to be checked
 * @i: current iteration + 3
 * Return: 1 if yes and 0 otherwise
 */

int recurse(int n, int i)
{
	if (n == 2)
		return (1);
	if (n <= 1 || n % 2 == 0)
		return (0);
	if (n % i == 0 && n != i)
		return (0);
	if (i < n)
		return (recurse(n, i+2));
	return (1);
}

/**
 * is_prime_number - check if the number is prime
 * @n: number to be checked
 * Return: 1 if primeand 0 otherwise
 */

int is_prime_number(int n)
{
	return (recurse(n, 3));
}

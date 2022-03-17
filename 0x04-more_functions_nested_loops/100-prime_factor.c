#include <stdio.h>

/**
 * main - entry point
 * Return: always 0
 */

int main(void)
{
	long int number;

	number = 612852475143;

	if (isPrime(number) == 1)
	{
		printf("%ld\n", number);
	}
	else
	{
		printf("%ld\n", biggestFactor(number));
	}
	return (0);
}

/**
 * isPrime - checkif the number is prime
 * @n: number to be checked
 * Return: true if prime and false otherwise
 */

int isPrime(long int n)
{
	int i;

	if (n <= 1)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	else
	{
		for (i = 2; i < n; i++)
		{
			if (n % i == 0)
			{
				return (0);
			}
		}
	return (1);
	}
}
/**
 * biggestFactor - returns the biggest prime factor of a number
 * @a: number to check
 * Return: biggest factor
 */
long int biggestFactor(long int a)
{
	long int i, factor;

	factor = a;
	for (i = 2; i <= factor; i++)
	{
		if (isPrime(factor) == 1)
		{
			break;
		}
		else
		{
			if ((factor % i == 0) && (isPrime(i) == 1))
			{
				factor = factor / i;
				continue;
			}
			else
			{
				factor = factor;
			}
		}
	}
	return (factor);
}

#include "main.h"

/**
 * print_to_98 - prints every number till 98
 * @n: the entered number
 */

void print_to_98(int n)
{
	int counter = 98;

	if (n < counter)
	{
		while (n <= counter)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > counter)
	{
		while (n >= counter)
		{
			printf("%d, ", n);
			n--;
		}
	}
	else
		printf("%d", counter);
}

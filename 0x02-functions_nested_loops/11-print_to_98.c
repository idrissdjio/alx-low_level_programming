#include <stdio.h>

/**
 * print_to_98 - prints every number till 98
 * @n: the entered number
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else 
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}


#include "main.h"

/**
 * print_binary - print a number as binary
 * @n: number to print as binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int bits = sizeof(long int) * 8, lead_zero = 1;
	unsigned long int bit = 1;

	for (bit = bit << (bits - 1); bit; bit = bit >> 1)
	{
		if ((n & bit) && lead_zero)
			lead_zero = 0;
		if (!lead_zero)
			_putchar(((n & bit) ? 1 : 0) + '0');
	}
	if (lead_zero)
		_putchar('0');
}

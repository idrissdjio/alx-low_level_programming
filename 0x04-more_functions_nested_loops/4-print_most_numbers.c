#include "main.h"

/**
 * print_most_numbers - print all the numbers from 0 to 9
 * without 2 and 4
 *
 * Return: nothing
 */

void print_most_numbers(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
	{
		if (number == '2' || number == '4')
			;
		else
			_putchar(number);
	}
	_putchar('\n');
}

#include "main.h"

/**
 * print_numbers - print from 0 to 9
 *
 * Return: nothing to return
 */

void print_numbers(void)
{
	int number;

	for (number = '0'; number < '10'; number++)
	{
		_putchar(number);
	}
	_putchar('\n');
}

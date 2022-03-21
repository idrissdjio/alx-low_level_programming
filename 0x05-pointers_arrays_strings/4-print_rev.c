#include "main.h"

/**
 * print_rev - reverse the string
 *
 * @s: to be evaluated
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i;
	int counter;

	i = 0;
	while (s[i])
		i++;

	while (i--)
		_putchar(s[i]);

	_putchar('\n');
}


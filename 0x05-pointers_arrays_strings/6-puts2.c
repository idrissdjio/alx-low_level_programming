#include "main.h"

/**
 * puts2 - print charcs
 *
 * @s: value
 *
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		_putchar(*(str + i));
		i += 2;
	}
	_putchar('\n');
}

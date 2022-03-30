#include "main.h"

/**
 * _pow_recursion - raise a value to a given power
 * @x: the given value
 * @y: the power
 * Return: returns the neu value
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 1)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}

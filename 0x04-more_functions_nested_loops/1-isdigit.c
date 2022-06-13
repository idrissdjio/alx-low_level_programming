#include "main.h"

/**
 * _isdigit - check if the input is digit
 * @c: input to be checked
 * Return: 1 yes and 0 no
 */

int _isdigit(int c)
{
	if (c <= '9' && c >= '0')
		return (1);
	else
		return (0);
}

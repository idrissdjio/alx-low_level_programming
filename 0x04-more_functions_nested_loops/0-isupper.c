#include "main.h"

/**
 * _isupper - determine if the character is upper
 *
 * @c: character to be checked
 * Return: void
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

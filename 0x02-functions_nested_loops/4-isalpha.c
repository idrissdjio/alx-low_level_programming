#include "main.h"

/**
 * _isalpha - check for the alphabetic letter
 * @c: The letter to be checked
 * Return: 1 if c is an alphabet letter and 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

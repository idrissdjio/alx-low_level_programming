#include "main.h"
#include <string.h>

/**
 * _strlen - return the length of a string
 *
 * @*s: value to be evaluated
 *
 * Return - returns the length
 */

int _strlen(char *s)
{
	int i = 0;
	while (s[i])
		i++;

	return (i);
}

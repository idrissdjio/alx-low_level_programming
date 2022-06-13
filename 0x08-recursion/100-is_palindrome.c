#include "main.h"

/**
 * recurse - check if palindrome
 * @start: char to check with end
 * @end: char to check with start
 * Return: 1 if yes and 0 otherwise
 */

int recurse(char *start, char *end)
{
	if (start == end)
		return (1);
	if (*start == *end && start + 1 == end)
		return (1);
	if (*start == *end)
		return (recurse(start + 1, end - 1));
	return (0);
}

/**
 * end - return a pointer at the end of a string
 * @s: string reach end of
 * Return: pointer to end of string
 */

char *end(char *s)
{
	if (*s)
		return (end(s + 1));
	return (s);
}

/**
 * is_palindrome - check if a string is palin...
 * @s: given string
 * Return: 1 is yes and 0 otherwise
 */

int is_palindrome(char *s)
{
	return (recurse(s, end(s) - 1));
}

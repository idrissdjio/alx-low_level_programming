#include "main.h"

/**
 * rev_string - reverse a string
 *
 * @s: receive the string address
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char str[1000];

	while (*(s + i))
	{
		*(str + i) = *(s + i);
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		*(s + i) = *(str + j);
		j++;
		i--;
	}
}


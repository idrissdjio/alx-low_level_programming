#include <stdlib.h>

/**
 * _strdup - Allocate memory for string copy
 * @str: string to copy
 * Return: pointer to string copy
 */
char *_strdup(char *str)
{
	int i;
	char *p;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		;
	p = malloc(i + 1);
	if (p != NULL)
	{
		for (; i >= 0; i--)
			p[i] = str[i];
	}
	return (p);
}

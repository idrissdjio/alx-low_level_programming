#include <stdlib.h>

/**
 * _strlen - compute length of a string
 * @s: string to compute length from
 * Return: length of string
 */
unsigned int _strlen(char *s)
{
	unsigned int len = 0;

	while (*s++)
		len++;
	return (len);
}

/**
 * string_nconcat - allocate memory for string concat
 * @s1: string to concat with s2
 * @s2: string to concat to s1
 * @n: number of characters of s2 to concat with s1
 * Return: pointer to allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len1 = 0, len2 = 0;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	if (n > len2)
		n = len2;
	p = malloc(len1 + n + 1);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < len1 + n; i++)
	{
		if (*s1)
		{
			p[i] = *s1;
			s1++;
		}
		else
		{
			p[i] = *s2;
			s2++;
		}
	}
	p[i] = '\0';
	return (p);
}

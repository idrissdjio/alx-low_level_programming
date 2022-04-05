#include <stdlib.h>

/**
 * str_concat - Allocate memory for string concat
 * @s1: string to concat with s2
 * @s2: string to concat with s1
 * Return: pointer to string concat
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, i, j;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (len1 = 0; s1[len1]; len1++)
		;
	for (len2 = 0; s2[len2]; len2++)
		;
	p = malloc(len1 + len2 + 1);
	if (p == NULL)
		return (p);
	for (i = 0; i < len1; i++)
		p[i] = s1[i];
	for (j = 0; i < len1 + len2; i++, j++)
		p[i] = s2[j];
	p[i] = '\0';
	return (p);
}

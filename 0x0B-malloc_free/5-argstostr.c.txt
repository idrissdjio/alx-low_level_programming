#include <stdlib.h>

/**
 * argstostr - allocate memory for concat of an array of strings
 * @ac: number of strings
 * @av: array of strings
 * Return: pointer to string concat
 */
char *argstostr(int ac, char **av)
{
	int r, c, i = 0, len = 0;
	char *p;

	if (ac <= 0 || av == NULL)
		return (NULL);
	for (r = 0; r < ac; r++)
	{
		for (c = 0; av[r][c]; c++)
			;
		len += c + 1;
	}
	p = malloc(len + 1);
	if (p != NULL)
	{
		for (r = 0; r < ac; r++)
		{
			for (c = 0; av[r][c]; c++, i++)
				p[i] = av[r][c];
			p[i++] = '\n';
		}
		p[i] = '\0';
	}
	return (p);
}

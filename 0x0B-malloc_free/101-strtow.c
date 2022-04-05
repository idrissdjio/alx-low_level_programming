#include <stdlib.h>

/**
 * wordcount - compute the number of words
 * @str: string to count words from
 * Return: number of words
 */
int wordcount(char *str)
{
	int i, words = 0, f = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ')
		{
			f = 0;
		}
		else if (!f)
		{
			f = 1;
			words++;
		}
	}
	return (words);
}

/**
 * strtow - split string into an array of words
 * @str: string to split
 * Return: pointer to array of words
 */
char **strtow(char *str)
{
	int i, r = 0, words;
	char **p;

	if (str == NULL)
		return (NULL);
	words = wordcount(str);
	if (!words)
		return (NULL);
	p = malloc((words + 1) * sizeof(*p));
	if (p == NULL)
		return (NULL);
	while (*str)
	{
		if (*str == ' ')
		{
			str += 1;
			continue;
		}
		for (i = 0; str[i] != ' ' && str[i] != '\0'; i++)
			;
		p[r] = malloc(i + 1);
		if (p[r] == NULL)
		{
			for (i = 0; i < r; i++)
				free(p[i]);
			free(p);
			return (NULL);
		}
		for (i = 0; str[i] != ' ' && str[i] != '\0'; i++)
			p[r][i] = str[i];
		p[r][i] = '\0';
		r++;
		str += i;
	}
	p[r] = NULL;
	return (p);
}

#include <stdlib.h>

/**
 * array_range - create an array of integers in a range
 * @min: minimum value in the range
 * @max: maximum value in the range
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int *p, i;

	if (min > max)
		return (NULL);
	p = malloc((max - min + 1) * sizeof(*p));
	if (p == NULL)
		return (NULL);
	for (i = 0; min + i <= max; i++)
	{
		p[i] = min + i;
	}
	return (p);
}

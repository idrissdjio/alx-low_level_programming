#include <stdlib.h>

/**
 * create_array - create and initialize a char array
 * @size: the size of the array to create
 * @c: initial value to fill array
 * Return: pointer to the created array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p = NULL;

	if (size > 0)
		p = malloc(size);
	if (p != NULL)
	{
		for (i = 0; i < size; i++)
			p[i] = c;
	}
	return (p);
}

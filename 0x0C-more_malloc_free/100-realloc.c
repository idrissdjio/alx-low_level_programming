#include <stdlib.h>

/**
 * _realloc - reallocate a memory block
 * @ptr: memory block to reallocate
 * @old_size: size of memory block of ptr in bytes
 * @new_size: size of memory block of new memory block in bytes
 * Return: pointer to new memory block or NULL if failed
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;

	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
		return ((void *)malloc(new_size));
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	if (old_size > new_size)
		old_size = new_size;
	while (old_size--)
		p[old_size] = ((char *)ptr)[old_size];
	free(ptr);
	return ((void *)p);
}

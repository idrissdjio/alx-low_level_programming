#include <stddef.h>

/**
 * array_iterator - execute a function for each element
 * @array: array to iterate
 * @size: size of array
 * @action: iterator
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}

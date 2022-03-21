#include "main.h"

/**
 *swap_int - swap two ints
 *
 * @a: first value
 * @b: second value
 *
 * Return - void
 */

void swap_int(int *a, int *b)
{
	int t;

	t = *a;

	*a = *b;

	*b = t;
}

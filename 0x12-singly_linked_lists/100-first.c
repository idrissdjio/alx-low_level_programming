#include <stdio.h>

/**
 * beforemain - prints before the main function
 */
void __attribute__ ((constructor)) beforemain()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

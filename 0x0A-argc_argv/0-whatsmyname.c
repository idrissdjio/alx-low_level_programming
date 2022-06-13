#include <stdio.h>

/**
 * main - prints the program name
 * @argv: Strings containning the program name and arguments
 * @argc: number of elements in the argv
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}

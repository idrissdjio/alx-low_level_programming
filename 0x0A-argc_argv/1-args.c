#include <stdio.h>

/**
 * main - prints the number the arguments
 * @argv: array of strings of arguments
 * @argc: size of the argv
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}

#include <stdio.h>

/**
 * main - prints all the arguments
 * @argv: array of strings of arguments
 * @argc: size of the argv
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

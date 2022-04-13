#include <stdio.h>
#include <stdlib.h>

/**
 * main - print opcodes of main
 * @argc: number of args in argv, should be 2
 * @argv: args containing number of bytes to print
 * Return: Success (0), Error (1)
 */
int main(int argc, char *argv[])
{
	int n;
	char *fn;

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		puts("Error");
		return (2);
	}
	fn = (char *)main;
	for (; n > 0; n--, fn++)
	{
		printf("%02x", *fn & 0xff);
		if (n != 1)
			putchar(' ');
	}
	putchar('\n');
	return (0);
}

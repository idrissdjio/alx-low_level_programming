#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - compute a simple math opr
 * @argc: number of args in argv
 * @argv: arg containing 2 numb and opr
 * Return: Success (0) and Error (98)
 */
int main(int argc, char *argv[])
{
	int num1, num2, (*fn)(int, int);

	if (argc != 4)
	{
		puts("Error");
		return (98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if (num2 == 0 && (*argv[2] == '/' || *argv[2] == '%'))
	{
		puts("Error");
		return (100);
	}
	fn = get_op_func(argv[2]);
	if (fn == NULL)
	{
		puts("Error");
		return (99);
	}
	printf("%d\n", fn(num1, num2));
	return (0);
}

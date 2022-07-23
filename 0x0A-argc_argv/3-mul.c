#include <stdio.h>
#include <stdlib.h>

/**
 * main -  a program that multiplies two numbers.
 *
 * @argc: argument count.
 * @argv: arguments
 *
 * Return: (0) Success.
 */

int main(int argc, char *argv[])
{
	int a, b, c;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	c = a * b;

	printf("%d\n", c);

	return (0);
}

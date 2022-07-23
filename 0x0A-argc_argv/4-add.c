#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main -  a program that adds positive numbers.
 *
 * @argc: argument count.
 * @argv: argument.
 *
 * Return: (0).
 */

int main(int argc, char *argv[])
{
	int a, b;
	int c = 0;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (!isdigit(argv[a][b]))
			{
				printf("Error\n");
				return (1);
			}
		}
		c = c + atoi(argv[a]);
	}

	printf("%d\n", c);
	return (0);
}

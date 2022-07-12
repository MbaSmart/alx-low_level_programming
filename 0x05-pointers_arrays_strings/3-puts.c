#include "main.h"

/**
 * _puts -> a function that prints a string, followed
 * by a new line, to stdout
 *
 * @str: string to be printed out
 *
 * Return: 0 (Success)
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
	{
		_putchar(str[i]);
	}
	_putchar(10);
}

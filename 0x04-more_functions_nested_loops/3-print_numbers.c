#include "main.h"

/**
* print_numbers -> Write a function that prints the numbers,
* from 0 to 9, followed by a new line.
*
* Return: 0 (Success)
*/

void print_numbers(void)
{
	char n;

	n = '0';

	while (n <= '9')
	{
		_putchar(n);
		n++;
	}

	_putchar(10);
}

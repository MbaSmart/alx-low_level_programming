#include "main.h"

/**
* print_most_numbers -> Write a function that prints the numbers,
* from 0 to 9, followed by a new line.
*
* Return: 0 (Success)
*/

void print_most_numbers(void)
{
	char n;

	n = '0';

	for (n = '0'; n <= '9'; n++)
	{
		if (n == '2' || n == '4')
		{

		}
		else
			_putchar(n);
	}
	_putchar(10);
}

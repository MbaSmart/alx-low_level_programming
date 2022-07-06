#include "main.h"

/**
*print_alphabet_x10 -> Success
*
*Return: 0 (Success)
*
*/

void print_alphabet_x10(void)
{
	char i;

	i = 0;

	while (i < 10)
	{
		char n;

			for (n = 'a'; n <= 'z'; n++)
			{
				_putchar(n);
			}
	_putchar('\n');
	i++;
	}
}

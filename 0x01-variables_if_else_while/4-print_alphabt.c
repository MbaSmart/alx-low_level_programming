#include <stdio.h>

/**
 *main -> Write a program that prints the alphabet in
 *lowercase, followed by a new line.
 *
 *Return: 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
	{
		putchar(ch);
	}
	}

	putchar(10); /* this is an ascii code for a new line */

	return (0);
}

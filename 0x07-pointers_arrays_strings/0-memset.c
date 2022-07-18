#include "main.h"

/**
 * _memset -> a function that fills memory
 * with a constant byte.
 *
 * @s: This is a pointer to a char parameter,
 * where the change will start from.
 *
 * @b: Data to be changed.
 * @n: number of change(s).
 *
 * Return: *s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

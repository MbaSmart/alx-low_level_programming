#include "main.h"

/**
 * _memcpy - a function that copies memory area.
 *
 * @dest: this is the destination address'
 * @src: this is the source address.
 * @n: index.
 *
 * Return: *dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

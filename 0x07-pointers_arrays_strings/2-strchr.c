#include "main.h"

/**
 * _strchr - a function that locates a character in a string.
 *
 * @s: pointer to a char.
 * @c: character parameter to be found.
 *
 * Return: *s.
 */

char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - this prints a name.
 *
 * @name: the name.
 * @f: the function to print with.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	f(name);
}

#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - a function that executes a function
 * @array: array of integer.
 * @size: size of array.
 * @action: function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!action || !array)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

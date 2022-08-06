#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * int_index - this searches for an integer.
 * @array: the array to be looped through
 * @size: the size of the array
 * @cmp: the pointer to the function that loops through.
 * Return: this returns an index of the array.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}

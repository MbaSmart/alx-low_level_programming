#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog -  a function that prints a struct dog.
 * @d: this is a pointer to the struct dog.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("nil\n");

		printf("Age: %f\n", d->age);

		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("nil\n");
	}
}

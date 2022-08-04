#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * *new_dog - this a pointer to the varible of
 * a new dog template
 * @name: this is the name of the dog.
 * @age: the age of the dog.
 * @owner: the owner of the dog.
 *
 * Return: new_dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogee;
	int i, j, k;
	char *o, *n;

	dogee = malloc(sizeof(dog_t));
	if (dogee == NULL)
	{
		free(dogee);
		return (NULL);
	}

	i = strlen(name);
	j = strlen(owner);

	o = malloc(sizeof(char) * (i + 1));
	if (o == NULL)
	{
		free(dogee);
		free(o);
		return (NULL);
	}

	n = malloc(sizeof(char) * (j + 1));
	if (n == NULL)
	{
		free(n);
		return (NULL);
	}

	for (k = 0; k <= i; k++)
		n[k] = name[k];
	for (k = 0; k <= j; k++)
		o[k] = owner[k];
	dogee->owner = n;
	dogee->age = age;
	dogee->owner = o;
	return (dogee);
}

#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize a variable of type struct dog
 * @d: address of a struct to be initialize
 * @name: name of the dog to be initialized
 * @age: age of the dog to be initialized
 * @owner: owner of the dog to be initialized
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}

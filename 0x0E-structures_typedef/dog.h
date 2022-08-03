#ifndef MY_DOG
#define MY_DOG
/**
 * struct dog - This is a template that details
 * the chracteristics of dog.
 *
 * @name: the dog's name.
 * @age: the dog's age.
 * @owner: the dog's owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif

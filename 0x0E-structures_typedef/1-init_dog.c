#include "dog.h"

/**
 * init_dog - the function initializes a variable of type struct dog
 * @d: dog to initialize
 * @name: poppy's name
 * @age: poppy's age
 * @owner: poppy's owner name
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}

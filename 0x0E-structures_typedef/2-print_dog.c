#include "dog.h"
#include <stdio.h>

/**
 * print_dog - the function writes a struct dog
 * @d: the poppy to print
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}

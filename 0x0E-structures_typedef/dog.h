#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a poppy struct with three elements
 * @name: poppy's name
 * @age: poppy's age
 * @owner: poppy's owner name
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif

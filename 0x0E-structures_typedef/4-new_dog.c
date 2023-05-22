#include "dog.h"
#include <stdio.h>

/**
 * _strlen - the function gets the length of a string
 * @s: string to get its lengt
 * Return: length of the string as integer
 */

int _strlen(const char *s)
{
	int len = 0;

	while (*s++)
	{
		len++;
	}
	return (len);
}

/**
 * _strcopy - the function returns @dest string with a
 * copy of string from @src string
 * @src: the source string
 * @dest: the destination string
 * Return: destination sting
 */

char *_strcopy(char *dest, char *src)
{
	int x = 0;

	do {
		dest[x] = src[x];
		x++;
	} while (src[x]);
	dest[x] = '\0';

	return (dest);
}

/**
 * *new_dog - the function creates a ne poppy
 * @name: the poppy's name
 * @age: the poppy's age
 * @owner: the poppy's owner name
 * Return: struct pointer to dog  , NULL if new_dog function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
	{
		return (NULL);
	}

	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = _strcopy(dog->name, name);
	dog->age = age;
	dog->owner = _strcopy(dog->owner, owner);

	return (dog);
}

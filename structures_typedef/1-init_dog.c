#include "dog.h"
#include <stdio.h>
/**
 * init_dog - initialize a veriable of type struct dog
 * @d: dog to be initialized
 * @name: name of dog
 * @age: dog age
 * @owner: dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		d->age = age;
		d->owner = owner;
	}
}

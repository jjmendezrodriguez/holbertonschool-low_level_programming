#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - returns the length
 *
 * @s: value of variable
 *
 * Return: return the length
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
/**
 * _strcpy - copies a string to a new location
 * @dest: destination buffer
 * @src: source string
 *
 */
void _strcpy(char *dest, char *src)
{
	while ((*dest++ = *src++) != '\0')
		;
}
/**
 * new_dog - creates a new dog
 * @name: the name of the dog
 * @age: dog age
 * @owner: dog owner
 *
 * Return: new Dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog = (dog_t *)malloc(sizeof(dog_t));

	if (newDog == NULL)
	{
	return (NULL);
	}

	newDog->name = (char *)malloc(_strlen(name) + 1);
	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}
	_strcpy(newDog->name, name);

	newDog->owner = (char *)malloc(_strlen(owner) + 1);
	if (newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}
		_strcpy(newDog->owner, owner);
		newDog->age = age;
		return (newDog);
}

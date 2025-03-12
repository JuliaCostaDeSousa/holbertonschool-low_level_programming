#include "dog.h"

/**
 * new_dog - creates a new dog
 *
 * @name: name
 * @age: age
 * @owner: owner
 * Return: new struct for new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *name_copy = NULL;
	char *owner_copy = NULL;
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	return (NULL);

	if (name == NULL)
	name = "";
	if (owner == NULL)
	owner = "";

	name_copy = name;
	owner_copy = owner;

	new_dog->name = name_copy;
	new_dog->age = age;
	new_dog->owner = owner_copy;

	return (new_dog);
}

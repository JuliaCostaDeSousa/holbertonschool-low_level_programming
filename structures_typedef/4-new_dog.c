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
	dog_t *create_new_dog;

	create_new_dog = malloc(sizeof(dog_t));
	if (create_new_dog == NULL)
	return (NULL);

	if (name == NULL)
	name = "";
	if (owner == NULL)
	owner = "";

	create_new_dog->name = name;
	create_new_dog->age = age;
	create_new_dog->owner = owner;

	return (create_new_dog);
}

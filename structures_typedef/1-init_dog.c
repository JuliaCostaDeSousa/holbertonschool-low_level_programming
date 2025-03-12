#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to struct
 * @name: dog name
 * @age: dog age
 * @owner: dog owner*
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		exit(98);
	}
	if (name == NULL)
	name = "";
	d->name = name;

	d->age = age;

	if (owner == NULL)
	owner = "";
	d->owner = owner;
}

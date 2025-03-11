#include <stdio.h>
#include <stdlib.h>



/**
 * struct dog - caracteristique du dogo
 * @name: char *
 * @age: float
 * @owner: char *
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

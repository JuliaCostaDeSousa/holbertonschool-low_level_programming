#include "dog.h"
/**
 * _strcpy - copies the string pointed to by src to the buffer pointed by dest
 * Description: cf au dessus
 * @dest: destination
 * @src: source
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index] != '\0')
	{
		*(dest + index) = src[index];
		index++;
	}
	*(dest + index) = '\0';
	return (dest);
}
/**
  * _strlen - returns the length of a string
  * Description: returns the length of a string
  * @s: string
  * Return: length of a string
  */
int _strlen(char *s)
{
	int index = 0;

	while ((*(s + index) != '\0'))
	{
		index++;
	}
	return (index);
}

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
	int len_name;
	int len_owner;
	char *name_copy;
	char *owner_copy;
	dog_t *create_new_dog;

	create_new_dog = malloc(sizeof(dog_t));
	if (create_new_dog == NULL)
	return (NULL);

	if (name == NULL)
	name = "";
	len_name = _strlen(name) + 1;
	name_copy = malloc(len_name);
	if (name_copy == NULL)
	{
		free(create_new_dog);
		return (NULL);
	}
	if (owner == NULL)

	owner = "";
	len_owner = _strlen(owner) + 1;
	owner_copy = malloc(len_owner);
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(create_new_dog);
		return (NULL);
	}

	name_copy = _strcpy(name_copy, name);
	owner_copy = _strcpy(owner_copy, owner);

	create_new_dog->name = name_copy;
	create_new_dog->age = age;
	create_new_dog->owner = owner_copy;

	return (create_new_dog);
}

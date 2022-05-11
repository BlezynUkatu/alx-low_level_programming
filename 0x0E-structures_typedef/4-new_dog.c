#include <stdlib.h>
#include "dog.h"

/**
 * new_dog     - Create a new dog variable
 * @name:        Name of the dog
 * @age:         Age of the dog
 * @owner:       Owner of the dog
 * Return:       Pointer to new dog variable
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *snoopie;
	char *new_name, *new_owner;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	snoopie = malloc(sizeof(dog_t));
	if (snoopie == NULL)
	{
		return (NULL);
	}

	new_name = _copy(name);
	if (new_name == NULL)
	{
		free(snoopie);
		return (NULL);
	}
	(*snoopie).name = new_name;

	(*snoopie).age = age;

	new_owner = _copy(owner);
	if (new_owner == NULL)
	{
		free((*snoopie).name);
		free(snoopie);
		return (NULL);
	}
	(*snoopie).owner = new_owner;

	return (snoopie);

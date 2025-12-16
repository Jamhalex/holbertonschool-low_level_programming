#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to new dog, or NULL if failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int i, len_name = 0, len_owner = 0;

	if (name == NULL || owner == NULL)
		return (NULL);

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	/* length of name */
	while (name[len_name])
		len_name++;

	d->name = malloc(len_name + 1);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	for (i = 0; i <= len_name; i++)
		d->name[i] = name[i];

	/* length of owner */
	while (owner[len_owner])
		len_owner++;

	d->owner = malloc(len_owner + 1);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	for (i = 0; i <= len_owner; i++)
		d->owner[i] = owner[i];

	d->age = age;

	return (d);
}


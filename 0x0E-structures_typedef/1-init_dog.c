#include <stdlib.h>
#include "dog.h"

/**
 *init_dog - initializes and structure
 *@d: structure of type dog
 *@name: name to be stored
 *@age: age to stored
 *@owner: name of the owner to be stored
 *Return: None
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}

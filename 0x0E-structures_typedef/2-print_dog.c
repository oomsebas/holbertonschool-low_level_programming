#include <stdio.h>
#include "dog.h"

/**
 *print_dog - initializes and structure
 *@d: structure of type dog
 *Return: None
 */
void print_dog(struct dog *d)
{
	if (d)
	{
	if (d->name == 0)
		d->name = "(nil)";
	if (d->age == 0)
		d->age = 0;
	if (d->owner == 0)
		d->owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\ns", d->name, d->age, d->owner);
	}
}

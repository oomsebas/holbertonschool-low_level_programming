#ifndef __STRUCT__
#define __STRUCT__

/**
 *struct dog - structure of a dog
 *@name: pointer name of the dog
 *@age: the age of the dog
 *@owner: pointer to ID to owner of the dog
 *Description: this struct contains all the variables related
 *to the dog characteristics
 */
struct dog
{
	char *name;
	float age;
	char *owner;

};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /* __STRUCT__*/
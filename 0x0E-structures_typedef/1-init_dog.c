#include <stdio.h>
#include "dog.h"
/**
 * init_dog - Initializes dog structure
 *@d: struct name
 *@name: dog's name
 *@age: dog's age
 *@owner: dog's owner
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}

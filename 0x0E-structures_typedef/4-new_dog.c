#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - Initializes dog structure
 *@d: struct name
 *@name: dog's name
 *@age: dog's age
 *@owner: dog's owner
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *copy_nd;
	int lenght_name, lenght_owner, copy_name, copy_owner;

	copy_nd = malloc (sizeof(dog_t));
	if(!copy_nd)
	{
		return (NULL);
	}
	for (lenght_name = 0; name[lenght_name] != '\0'; lenght_name++)
		;
	(*copy_nd).name = malloc (sizeof(char) * (lenght_name + 1));
	if(!(*copy_nd).name)
	{
		free(copy_nd);
		return (NULL);
	}
	(*copy_nd).age = age;
	for (lenght_owner = 0; owner[lenght_owner] != '\0'; lenght_owner++)
		;
	(*copy_nd).owner = malloc (sizeof(char) * (lenght_owner + 1));
	if(!(*copy_nd).owner)
	{
		free((*copy_nd).name);
		free(copy_nd);
		return (NULL);
	}
	for (copy_name = 0; copy_name < lenght_name; copy_name++)
	{
		(*copy_nd).name[copy_name] = name[copy_name];
	}
	for (copy_owner = 0; copy_owner < lenght_owner; copy_owner++)
	{
		(*copy_nd).owner[copy_owner] = name[copy_owner];
	}
	return (copy_nd);
}

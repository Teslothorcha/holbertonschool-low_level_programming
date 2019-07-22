#ifndef DOGO_H
#define DOGO_H
/**
 * struct dog - name, age, owner.
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Description: sets the type for name, age, owner.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOGO_H */

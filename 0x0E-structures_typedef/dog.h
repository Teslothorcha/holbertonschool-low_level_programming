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

/**
 * dog_t - new name for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif /* DOGO_H */

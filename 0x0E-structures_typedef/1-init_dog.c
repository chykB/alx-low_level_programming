#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initializes dog variable
 * @d: pointer to struct dog
 * @name: initializes name member
 * @age: initializes age
 * @owner: initializes owner
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}

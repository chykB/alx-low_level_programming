#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - print out struct dog
 * @struct-dog: dog info to print
 * @d: pointer to the info
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name %s Age %f Owner %s\n", d->name, d->age, d->owner);
}

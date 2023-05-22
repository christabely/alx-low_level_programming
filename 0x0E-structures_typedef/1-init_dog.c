#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - struct dog variable
 *@d: array
 *@name: name
 *@age: age
 *@owner: owner
 * Description: struct for dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}

}

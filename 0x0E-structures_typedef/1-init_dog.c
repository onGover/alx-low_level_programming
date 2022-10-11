#include <stdio.h>
#include "dog.h"
/**
 *init_dog - intializes a variable of type struct dog.
 *@d:pointer to structure.
 *@name: first member.
 *@age: second number.
 *@owner: third memeber.
 *
 *Return: void.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}

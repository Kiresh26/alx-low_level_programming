#include <dog.h>
#include <stdlib.h>

/**
 * init_dog - initialize a variable of type struct dog
 * @name: dog name
 * @age: dog age
 * @owner: owner name
 * @d: struct dog
 *
 * Return: 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}


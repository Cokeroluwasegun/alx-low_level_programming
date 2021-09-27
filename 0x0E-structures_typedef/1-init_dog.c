#include "dog.h"
#include <stdio.h>
/**
 * init_dog - check the code.
 * @d: struct dog
 * @name: string
 * @age: float
 * @owner: string
 * Return: Void.
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

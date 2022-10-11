#include <stdio.h>
#include "dog.h"
#include <stdlibs.h>

/**
 * print_dog -prints a structure dog
 * @d: struct dog to print
 *
 */
void print_dog(struct dog *d)
{
if (d = NULL)
	return;

if (d->name == NULL)
	d->name = "(nil)";
if (d->owner == NULL)
	d->owner = "(nil)";

printf("name: %d\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}

#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * print_dog -prints a structure dog
 * @d: struct dog to print
 *
 */
void print_dog(struct dog *d)
{
if (d)
	{
	if (d->name)
		printf("Name: %s\n", d->name);
	else
		printf("Name: (nil)\n");
	printf("Age: %.6f\n", d->age);
	if (d->owner)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: (nil)\n");
	}
}

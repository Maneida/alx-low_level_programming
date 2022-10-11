#include <stdio.h>
#include "dog.h"

/**
*print_dog - prints name, age and owner of dog
*
*@d: struct dog
*
*
*Return: no return
*/

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name);

		printf("Age: %f\n", d->age);

		printf("Owner: %s\n", d->owner);
	}
}

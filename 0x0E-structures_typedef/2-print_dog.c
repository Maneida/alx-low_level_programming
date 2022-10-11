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
		if (d == NULL)
		{
			printf("Name: (nil)\n")
		} else
		{
			printf("Name: %s\n", d->name);
		}
		printf("Age: %f\n", d->age);
		if (d == NULL)
		{
			printf("Owner: (nil)\n")
		} else
		{
			printf("Owner: %s\n", d->owner);
		}
	}
}

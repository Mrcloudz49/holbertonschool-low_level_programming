#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints a struct dog
 * @d: struct name
 * Return: 0
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d == NULL)
		d->name = "(nil)";
	if (d == NULL)
		d->age = (0);
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name : %s\n", d->name);
	printf("Age : %.6f\n", d->age);
	printf("Owner : %s\n", d->owner);
}


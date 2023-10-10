#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints  struct dog
 * @d: Pointer to a struct dog
 *
 * Description: This function prints the name, age, and owner of a struct dog.
 * If a field is NULL, it prints "(nil)" for that field.
 */
void print_dog(struct dog *d)
{
if (d == NULL)
return;
printf("Name: %s\n", d->name ? d->name : "(nil)");
printf("Age: %.6f\n", d->age);
printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}

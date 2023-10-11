#include <stdlib.h>
#include "dog.h"
#include <string.h>
#include <stdio.h>

/**
 * new_dog - Creates a new dog structure
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Return: A pointer to the newly created dog structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *newDog;

if (name == NULL || owner == NULL)
return (NULL);

newDog = malloc(sizeof(dog_t));
if (newDog == NULL)
return (NULL);

newDog->name = strdup(name);
if (newDog->name == NULL)
{
free(newDog);
return (NULL);
}
newDog->age = age;
newDog->owner = strdup(owner);

if (newDog->owner == NULL)
{
free(newDog->name);
free(newDog);
return (NULL);
}

return (newDog);
}

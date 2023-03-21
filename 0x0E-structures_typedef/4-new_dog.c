#include "dog.h"
#include <stdlib.h>
/**
 *  * new_dog - Entry point
 *   * @name: Input
 *    * @age: Input
 *     * @owner: Input
 *      *
 *       * Return: NULL if function fails
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog_ptr;
int i, j, namelen = 0, ownlen = 0;
dog_ptr = malloc(sizeof(dog_ptr));
if (dog_ptr == NULL || name == NULL || owner == NULL)
{
free(dog_ptr);
return (NULL);
};
while (name[namelen] != '\0')
{
namelen++;
};
while (owner[ownlen] != '\0')
{
ownlen++;
};
dog_ptr->name = malloc(namelen + 1);
dog_ptr->owner = malloc(ownlen + 1);
if (!(dog_ptr->name) || !(dog_ptr->owner))
{
free(dog_ptr->name);
free(dog_ptr->owner);
free(dog_ptr);
return (NULL);
}
for (i = 0; i < namelen; i++)
{
dog_ptr->name[i] = name[i];
}
dog_ptr->name[i] = '\0';
dog_ptr->age = age;
for (j = 0; j < ownlen; j++)
{
dog_ptr->owner[j] = owner[j];
}
dog_ptr->owner[j] = '\0';
return (dog_ptr);
}

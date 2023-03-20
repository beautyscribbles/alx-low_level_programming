#include <stdlib.h>
#include "dog.h"

/**
 *  * free_dog - Entry point
 *   * @d: input
*/
void free_dog(dog_t *d)
{
if (d)
{
free(d->name);
free(d->owner);
free(d);
}
}

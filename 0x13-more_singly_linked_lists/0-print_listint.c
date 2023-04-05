/*Beauty Scribbles*/
#include "lists.h"

 /**
  *  * print_listint - prints all the elements of a listint_t list.
  *   * @h: input
  *    * Return: number of nodes.
*/
/*Protype used*/ size_t print_listint(const listint_t *h)
{
const listint_t *node = h;
size_t arrow = 0;
while (node)
{
printf("%i\n", node->n);
arrow++;
node = node->next;
}
return (arrow);/*return statement*/
}


#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: input
 * @n: input
 * Return: address of the new element, or NULL if it failed
**/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *verve, *aux = *head;
verve = malloc(sizeof(listint_t));
if (verve == NULL)
return (NULL);
verve->n = n;
verve->next = NULL;
if (aux)
{
while (aux->next)
aux = aux->next;
aux->next = verve;
}
else
*head = verve;
return (verve);
}

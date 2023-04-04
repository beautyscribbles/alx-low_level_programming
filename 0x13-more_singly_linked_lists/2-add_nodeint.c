#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: input.
 * @n: input.
 * Return: address of the new element, or NULL if it failed
**/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *verve;
verve = malloc(sizeof(listint_t));
if (verve == NULL)
return (NULL);
verve->n = n;
verve->next = *head;
*head = verve;
return (verve);
}

#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a dlistint_t list
 * @h: pointer to the head or start of the doubly linked list
 * Return: the number of node
 */
size_t print_dlistint(const dlistint_t *h)
{
	int track_node;

	/*
	 * we will use a 'for' loop to iterateover the doubly linked list
	 * starting from the given head pointer
	 */
	for (track_node = 0; h != NULL; track_node++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	/*
	 * Finally,
	 * we will return the 'track_node' as the result.
	 */
	return (track_node);
}

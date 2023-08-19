#include "lists.h"

/**
 * print_dlistint - it prints all the elements of a dlistint_t list
 * @h: points to the start of the doubly linked list
 * Return: the no. of node
 */
size_t print_dlistint(const dlistint_t *h)
{
	int track_node;

	/*
	 * Use a 'for' loop to iterate the doubly linked list
	 * from the head pointer node
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

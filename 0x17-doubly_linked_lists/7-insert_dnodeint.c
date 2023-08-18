#include "lists.h"

/**
 * insert_dnodeint_at_index - funct inserts  new node at,
 * a given positio
 * @h: pointr  pointr  h of linked list.
 * @idx: index of the list  the new  node should be added.
 * @n: value of the new nod.
 *
 * if it doenot  possible to add the new node  index idx, do not,
 * add the new node & return NULL.
 *
 * Return:  the addres of new nod, or NULL if it failed.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_nod;
	dlistint_t *head;
	unsigned int ii;

	new_nod = NULL;
	if (idx == 0)
		new_nod = add_dnodeint(h, n);
	else
	{
		head = *h;
		ii = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;
		while (head != NULL)
		{
			if (ii == idx)
			{
				if (head->next == NULL)
					new_nod = add_dnodeint_end(h, n);
				else
				{
					new_nod = malloc(sizeof(dlistint_t));
					if (new_nod != NULL)
					{
						new_nod->n = n;
						new_nod->next = head->next;
						new_nod->prev = head;
						head->next->prev = new_nod;
						head->next = new_nod;
					}
				}
				break;
			}
			head = head->next;
			ii++;
		}
	}
	return (new_nod);
}
